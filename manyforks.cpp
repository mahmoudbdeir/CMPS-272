#include <stdio.h>
#include <unistd.h>
int main() {
    fork();
    fork();
    fork();
    printf("Good Bye\n");
    return 0;
}