#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root,root1,root2,dis,real,img;
    printf("Enter the value of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    dis=b*b-4.0*a*c;
    if(dis==0)
    {
        printf("roots are real and equal\n");
        root1=root2=(-b)/(2.0*a);
        printf("Root1=Root2=%.2f",root1);
    }
    else if(dis>0)
    {
        printf("Roots are unequal and real\n");
        root1=((-b)+sqrt(dis))/(2.0*a);
        root2=((-b)-sqrt(dis))/(2.0*a);
        printf("Root1=%.2f and Root2=%.2f",root1,root2);
    }
    else{
        printf("roots are imaginary");
        real=(-b)/(2.0*a);
        img=sqrt(-dis)/(2.0*a);
        printf("Root1=%.2f+%.2f and Root2=%.2f-%.2f",real,img,real,img);
    }
    return 0;
}