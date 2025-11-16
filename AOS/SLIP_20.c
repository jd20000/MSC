//Q.1
// #include <stdio.h>
//  #include <unistd.h>
//  #include <signal.h>
//  #include <sys/wait.h>
//  int main(){ pid_t pid=fork();
//     if(!pid){
//         while(1){ printf("Child (PID=%d) running...\n",getpid()); sleep(1); }
//     } else {
//         sleep(3); printf("Parent: Suspending child %d\n",pid); kill(pid,SIGSTOP);
//         sleep(5); printf("Parent: Resuming child %d\n",pid); kill(pid,SIGCONT);
//         sleep(3); printf("Parent: Killing child %d\n",pid); kill(pid,SIGKILL);
//         wait(NULL); puts("Parent: Child terminated, exiting.");
//     }
//  }
//Q.2
 #include <stdio.h>
 #include <sys/stat.h>
 int main(int c, char *v[]) {
    struct stat s;
    for (int i = 1; i < c; i++) {
        stat(v[i], &s);
        printf("File: %s\nInode: %lu\n", v[i], s.st_ino);
        puts(S_ISREG(s.st_mode) ? "Regular file" :
             S_ISDIR(s.st_mode) ? "Directory" :
             S_ISCHR(s.st_mode) ? "Character device" :
             S_ISBLK(s.st_mode) ? "Block device" :
             S_ISFIFO(s.st_mode) ? "FIFO/Pipe" :
             S_ISLNK(s.st_mode) ? "Symbolic link" :
             S_ISSOCK(s.st_mode) ? "Socket" : "Unknown");
    }
 }