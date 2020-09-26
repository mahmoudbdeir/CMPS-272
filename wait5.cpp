#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    pid_t childpid; // variable to store the child’s pid
    childpid = fork();
    if (childpid == 0)
    { // child process
        usleep(1000000);
        printf("I am the child process %d my parent id is: %d\n", getpid(), getppid());
        exit(100);
    }
    else if (childpid > 0)
    { // parent process
        printf("I am the parent process, my first child’s id is: %d\n", childpid);
        // parent terminates but most probably not the child
    }
    return 0;
}