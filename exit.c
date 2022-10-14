#include<stdio.h>
#include<stdlib.h>

void main()
{
    for(int i=0; i<10; i++)
    {
        printf("%d\n", i);
        if(i==7)
        {
            printf("Now, i=7. So, terminating...");
            exit(1);
        }
    }
    printf("Not Reachable");
}