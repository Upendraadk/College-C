#include<stdio.h>
int main()
{
    float total,discount;
    printf("Enter the total amount");
    scanf("%f",&total);
    if(total>=2500)
    {
        discount=0.1*total;
        total=total-discount;
        printf("congrats you got %.2f\n",discount);
    }
    printf("pleasepay %.2f",total);
    return 0;
}