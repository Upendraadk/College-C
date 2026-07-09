#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    (num %2==0)?printf("Even"):printf("odd");
    return 0;
}