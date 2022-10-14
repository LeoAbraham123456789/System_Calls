#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
void main()
{
    int fp=open("file1.txt", O_RDWR);
    char c[30];
    char b[30];
    printf("Enter the string to be written: ");
    scanf("%[^\n]", c);
    write(fp, c, strlen(c));
    printf("Written Successfully");
    lseek(fp, 0, 0);
    read(fp, b, strlen(c));
    printf("The content is: %s", b);
    close(fp);
    printf("File closed");
}