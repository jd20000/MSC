// // #Q.1
// #include <stdio.h>
//  int main(){
//     freopen("out.txt","w",stdout);
//     printf("22+12345= %d",(22+12345));
//     printf("This text will be written to the file!\nHello, file redirection works! \n");
//  }
// #Q.2
 #include <stdio.h>
 #include <unistd.h>
 int main() {
    int fd[2]; pipe(fd);
    if (!fork()) { dup2(fd[1], 1); close(fd[0]); execlp("ls", "ls", "-l", NULL); }
    close(fd[1]);
    char c; int n = 0;
    while (read(fd[0], &c, 1) > 0) { putchar(c); if (c == '\n') n++; }
    printf("Total lines: %d\n", n);
 }
