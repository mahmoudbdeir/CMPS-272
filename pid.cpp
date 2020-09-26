#include<stdio.h>
#include<unistd.h>
int main() {
    printf("Hello from %d\n",getpid());
    printf("Parent id is %d\n",getppid());
}