// #Q.1
// #include <stdio.h>
// #include <sys/stat.h>
// #include <unistd.h>

// const char* file_type(mode_t mode) {
//     if (S_ISREG(mode))  return "Regular File";
//     if (S_ISDIR(mode))  return "Directory";
//     if (S_ISLNK(mode))  return "Symbolic Link";
//     if (S_ISCHR(mode))  return "Character Device";
//     if (S_ISBLK(mode))  return "Block Device";
//     if (S_ISFIFO(mode)) return "FIFO (Pipe)";
//     if (S_ISSOCK(mode)) return "Socket";
//     return "Unknown";
// }

// int main(int argc, char *argv[]) {
//     if (argc != 2) {
//         fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
//         return 1;
//     }

//     struct stat st;
//     if (stat(argv[1], &st) == -1) {
//         perror("stat");
//         return 1;
//     }

//     printf("File: %s\n", argv[1]);
//     printf("Inode: %llu\n", (unsigned long long)st.st_ino);
//     printf("Type : %s\n", file_type(st.st_mode));

//     return 0;
// }
// #Q.2
/* timed_exec.c */
 #include <stdio.h>
 #include <unistd.h>
 #include <signal.h>
 #include <sys/wait.h>
 pid_t c;
void h(int s){ puts("Timeout! Killing child..."); kill(c,SIGKILL); }
 int main(){
    signal(SIGALRM,h);
    if(!(c=fork())) execlp("sleep","sleep","10",NULL);
    alarm(5);
    int st;
   wait(&st);
    printf(WIFEXITED(st)?"Child exited normally\n":"Child killed by signal\n");
 }