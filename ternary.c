#include<stdio.h>
int main()
{
int a,b,max;
printf("enter the values of a and b");
scanf("%d%d",&a,&b);
max=(a>=b)?a:b;       //conditional operator
printf("largest=%d",max);
return 0;
}