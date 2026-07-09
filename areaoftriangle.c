#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("Enter the values of a,b and c");
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c&&(b+c)>a&&(c+a)>b)
    {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area of triangle=%.2f",area);
    }
    else{
        printf("triangle not possible");
    }
    return 0;
}