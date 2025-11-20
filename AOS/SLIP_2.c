// #Q.1
// #include <stdio.h>
//  #include <sys/stat.h>
//  #include <time.h>
//  int main(int c,char *v[]){
//     struct stat s; 
//     stat(v[1],&s);
//     printf("File: %s\nInode:%lu Links:%lu Size:%ld\nPerms:", v[1],s.st_ino,s.st_nlink,s.st_size);
//     for(int i=8;i>=0;i--) putchar((s.st_mode&(1<<i))?"rwxrwxrwx"[8-i]:'-');
//     printf("\nAccess:%sModify:%sChange:%s",ctime(&s.st_atime),ctime(&s.st_mtime),ctime(&s.st_ctime));
//  }

// #Q.2
#include <stdio.h>
 #include <signal.h>
 #include <stdlib.h>
 int c=0;
 void h(int s){
    if(++c==1)
    { 
      printf("\nCaught Ctrl-C! Press again to exit.\n");
    }
    else 
    { 
      printf("\nExiting program.\n"); exit(0); 
    }
 }
 int main(){
    signal(SIGINT,h);
    printf("Press Ctrl-C...\n");
    while(1);
 }