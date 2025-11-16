//  Q1
//  #include <stdio.h>
//  #include <unistd.h>
//  int main(){
//     int fd[2]; char buf[100];
//     pipe(fd);
//     if(fork()){ // parent
//         close(fd[0]);
//         write(fd[1],"Hello from parent!",18);
//         close(fd[1]);
//     }else{      // child
//         close(fd[1]);
//         read(fd[0],buf,sizeof(buf));
//         printf("Child read: %s\n",buf);
//     }
//         close(fd[0]);
//  }

//  Q.2
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