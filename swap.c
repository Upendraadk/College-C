#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("enter the values of a and b");
    scanf("%d%d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping a=%d,b=%d",a,b);
    return 0;
}