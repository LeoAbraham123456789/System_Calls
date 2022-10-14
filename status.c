#include<stdio.h>
#include<sys/stat.h>

void main()
{
    struct stat buffer;
    char filename[10];
    printf("Enter the file name: ");
    scanf("%s", filename);
    if(stat(filename, &buffer)==0)
        printf("\nFile exists");
    else
        printf("\nFile does not exists");
}