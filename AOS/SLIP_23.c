//Q.1
//  #include <stdio.h>
//  int main(int c, char *v[]){
//     FILE *f = fopen(v[1],"r");
//     if(f) printf("File exists\n"), fclose(f);
//     else  printf("File not found\n");
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