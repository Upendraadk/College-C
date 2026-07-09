#include<stdio.h>
int fib(int);
int main()
{
    int i,f,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=fib(i);
        printf("%d\t",f);
    }
    return 0;
}
int fib(int x)
{
    if(x==1)
    return 0;
    else if(x==2)
    return 1;
    else
    return fib(x-1)+fib(x-2);

}