#include<stdio.h>
#include<math.h>
#define pi 3.1415
int main()
{
float radius,area;
printf("Enter the value of radius");
scanf("%f",&radius);
area=pi*pow(radius,2);
printf("area is %f",area);
return 0;
}