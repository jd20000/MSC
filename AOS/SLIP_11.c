// // Q.1
//  #include <stdio.h>
//  #include <sys/resource.h>
//  int main() {
//     struct rlimit r;
//     getrlimit(RLIMIT_NOFILE, &r);
//     printf("Open files: %lu/%lu\n", r.rlim_cur, r.rlim_max);
//     getrlimit(RLIMIT_AS, &r);
//     printf("Memory: %lu/%lu\n", r.rlim_cur, r.rlim_max);
//     r.rlim_cur = 1024;
//     setrlimit(RLIMIT_NOFILE, &r);
//     getrlimit(RLIMIT_NOFILE, &r);
//     printf("Updated open files: %lu/%lu\n", r.rlim_cur, r.rlim_max);
//  }

//  Q.2
// #include <stdio.h>
//  #include <unistd.h>
//  #include <fcntl.h>
//  int main() {
//     int fd = open("output2.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); // O_write only , o_create only , o_turncate 
//     dup2(fd, 1);   // Redirect standard output (stdout) to file after this anything written will rediret
//     close(fd);     // Close original file descriptor 
//     printf("Hello! This goes to output2.txt\n");
//  }