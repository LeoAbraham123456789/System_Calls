#include<stdio.h>
#include<unistd.h>

void main()
{
    char *comm="ls";
    char *args[]={comm, "-lh", "-a", NULL};
    execvp(comm, args);
}