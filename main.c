#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num1;
    int Num2;
    char op;

    printf("Enter first number:");
    scanf(" %d", &Num1);
    printf("Enter operator:");
    scanf(" %c",&op);
    printf("Enter second number:");
    scanf(" %d", &Num2);

    if(op=='+')
    {
        printf("%d",Num1+Num2);
    }
    else if(op=='-')
    {
        printf("%d",Num1-Num2);
    }

    else if(op=='*')
    {
        printf("%d",Num1*Num2);
    }

    else if(op=='/')
    {
        printf("%d",Num1/Num2);
    }
    else
    {
       printf("Wrong input");
    }


    return 0;
}
