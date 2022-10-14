#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
void main()
{
    int fp=open("file1.txt", O_RDONLY);
    if(close(fp)<0)
    {
        printf("Error");
        exit(0);
    }
    printf("File closed");
}