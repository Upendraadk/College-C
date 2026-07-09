#include<stdio.h>
int fact(int x)
{
    if (x<=1)
    return 1;
    else
    return x*fact(x-1);
}
int main()
{
    int a=6;
  printf("%d! = %d",a,fact(a));
   return 0;
}