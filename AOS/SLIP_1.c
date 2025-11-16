//  #include <stdio.h>
//  #include <sys/stat.h>
//  #include <sys/types.h>
//  #include <unistd.h>
//  #include <stdlib.h>
//  int main(int c, char *v[]) {
//     struct stat s;
//     for (int i = 1; i < c; i++) {
//         stat(v[i], &s);
//         printf("File: %s\nInode: %lu\n", v[i], s.st_ino);
//         puts(S_ISREG(s.st_mode) ? "Regular file" :
//             S_ISDIR(s.st_mode) ? "Directory" :
//             S_ISCHR(s.st_mode) ? "Character device" :
//             S_ISBLK(s.st_mode) ? "Block device" :
//             S_ISFIFO(s.st_mode) ? "FIFO/Pipe" :
//             S_ISLNK(s.st_mode) ? "Symbolic link" :
//             S_ISSOCK(s.st_mode) ? "Socket" : "Unknown");
//         puts("");
//     }
//  }
// #Q.2
 #include <stdio.h>
 #include <unistd.h>
 #include <signal.h>
 #include <sys/wait.h>
 void h(int s){ puts("Parent: Alarm fired (SIGALRM received from child)"); }
 int main() {
    if(!fork()) { // child
        sleep(3);
        printf("Child: Sending SIGALRM to parent (PID=%d)\n", getppid());
        kill(getppid(), SIGALRM); // kill sends a signal to an given process via id , getppi gets parent process id kill tu jaa SIGALRM bhej process id
    } else {      // parent
        signal(SIGALRM, h);
        puts("Parent: Waiting for alarm...");
        pause();
        wait(NULL);
        puts("Parent: Child terminated. Exiting.");
    }
 }