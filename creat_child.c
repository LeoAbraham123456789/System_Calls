#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

void main()
{
    pid_t childp=fork();
    if(childp==0)
        printf("\nChild process created successsfully\n");
    printf("Child process id: %d", getpid());
    printf("Parent process id is %d", getppid());
}