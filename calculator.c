#include<stdio.h>
int main()
{
    char ch;
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    printf("Enter the operator");
    scanf(" %c",&ch);

    switch(ch)
    {
        case '+':
        printf("The sum is %d",a+b);
        break;

        case '-':
        printf("The difference is %d",a-b);
        break;

        case '*':
        printf("The product is %d",a*b);
        break;

        case '/':
        printf("The quotient is %d",a/b);
        break;

        default:
        printf("Invalid Input");        
    }
    return 0;

    }