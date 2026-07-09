#include<stdio.h>

int main()
{
    int arr[10], i, sum=0;
    printf("Enter the elements of array");
    for(i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
    
    }
    for(i=0;i<10;i++)
    {
        sum=sum +arr[i];
        
    }
    printf("sum=%d",sum);
    return 0;
}