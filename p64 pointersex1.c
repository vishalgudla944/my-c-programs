//Program to print address of value
#include<stdio.h>
int main()
{
    int a=10;
    float b=1.5;
    char c='v';
    printf("Value of a is %d\n",a);
    printf("Address of a is %u\n",&a);
    printf("Value of b is %f\n",b);
    printf("Address of b is %u\n",&b);
    printf("Value of c is %c\n",c);
    printf("Address of c is %u\n",&c);


    return 0;
}
