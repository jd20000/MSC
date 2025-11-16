//Q.1
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
        puts("");
    }
 }
 //Q.2
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