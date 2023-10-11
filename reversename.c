#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    int i;
    printf("Enter your name:");
    scanf(" %s",name);
    for(i=0;name[i];i++);
    printf("Name in reverse:");
    for(i=i-1;i>=0;i--)
    {
        printf("%c",name[i]);
    }

    return 0;
}
