// //Q1.
// #include <stdio.h>
//  #include <dirent.h>
//  #include <sys/stat.h>
//  #include <stdlib.h>
//  int main(int c,char**v){
//  if(c<2)return printf("Use: %s <bytes>\n",v[0]),0;
//  DIR*d=opendir(".");struct dirent*e;struct stat s;long n=atol(v[1]);
//  while((e=readdir(d)))if(!stat(e->d_name,&s)&&s.st_size>n)
//   printf("%s(%ldB)\n",e->d_name,(long)s.st_size);
//  closedir(d);
//  }

//Q2
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
    int st; wait(&st);
    printf(WIFEXITED(st)?"Child exited normally\n":"Child killed by signal\n");
 }