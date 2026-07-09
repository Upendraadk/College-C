#include<stdio.h>
int main()
{
    int arr2[3][3],i,j;
    printf("Enter the elements of array\n:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The elements in the array are:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}