#include<stdio.h>
int main()
{
    int a=5,b=3,c;
    c=a&b;   //bitwise and
    printf("a&b=%d\n",c);
     c=a|b;   //bitwise or
    printf("a|b=%d\n",c);
     c=a^b;   //bitwise XOR
    printf("a^b=%d\n",c);
     c=a>>2;   //right shift
    printf("a>>2=%d\n",c);
     c=a<<2;   //left shift
    printf("a<<2=%d\n",c);
    return 0;
}