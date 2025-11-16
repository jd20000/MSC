//Q.1
//  #include <stdio.h>
//  int main(){
//     freopen("out.txt","w",stdout);
//     printf("22+12345= %d",(22+12345));
//     printf("This text will be written to the file!\nHello, file redirection works! \n");
//  }
//Q.2
#include <stdio.h>
 #include <unistd.h>
 #include <fcntl.h>
 int main() {
    int fd = open("output2.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    dup2(fd, 1);   // Redirect standard output (stdout) to file
    close(fd);     // Close original file descriptor
    printf("Hello! This goes to output2.txt\n");
 }