#include <stdio.h>    // used for printf
#include <unistd.h>   // used for fork(), usleep;
#include <stdlib.h>   // used for exit();
#include <sys/wait.h> // used for wait();
int main()
{
    pid_t childpid; // variable to store the child’s pid
    childpid = fork();
    if (childpid == 0)
    { // child process
        printf("I am the child process %d\n", getpid());
        int y = 0;
        int x = 1 / y;
        exit(100);
    }
    else if (childpid > 0)
    { // parent process
        int status;
        printf("I am the parent process, my first child’s id is: %d\n", childpid);
        wait(&status);
        if (WIFEXITED(status))
        {
            printf("child terminates status: %d\n", WEXITSTATUS(status));
        }
        else
        { // stopped by a signal
            printf("child received signal: %d\n", WTERMSIG(status));
        }
    }
    return 0;
}