//Q.1
//  #include <stdio.h>
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
 #include <dirent.h>
 #include <string.h>
 int main(int c, char *v[]) {
    DIR *d = opendir(".");        // Open current directory
    struct dirent *f;
    while ((f = readdir(d))) {    // Read each file in directory
        if (strncmp(f->d_name, v[1], strlen(v[1])) == 0)
            puts(f->d_name);      // Print file if it starts with prefix
    }
    closedir(d);                  // Close directory
 }