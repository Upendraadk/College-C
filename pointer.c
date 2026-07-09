#include<stdio.h>
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x= *y;
    *y= temp;
}
int main()
{
    int a=5, b=6;
    printf("Before swapping");
    printf("\n %d %d", a,b);
    swap(&a,&b);
    printf("After swapping");
    printf("\n %d %d", a,b);

    return 0;
}