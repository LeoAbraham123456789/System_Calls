#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>

void main()
{
    DIR *dp;
    struct dirent *dirp;
    char direct[90];
    printf("Enter the directory name: ");
    scanf("%s", direct);
    dp=opendir(direct);
    while((dirp=readdir(dp))!=NULL)
        printf("%s\n", dirp->d_name);
    closedir(dp);
}