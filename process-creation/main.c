#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main () {
    int pid, p1, p2;
    pid = fork();
    
    if(pid == -1) {
        printf("\n Error in creation:");
        exit(-1);
    }
    
    if (pid != 0) {
        printf("Parent process");
        p1 = getpid();
        printf("\n parent process is :% d", p1);
    }
    else {
        printf("\n Child process\n");
        p2 = getpid();
        printf("\n child process is :% d", p2);
        printf("\n the parent id is %d", getppid());
    }
}
