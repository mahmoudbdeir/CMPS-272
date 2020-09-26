#include<stdio.h>
#include<unistd.h>
int main() {
    int i = fork();
    printf("Hello from pid: %d, ppid: %d, i=%d\n",getpid(),getppid(),i);
}