#include<stdio.h>
int main()
{
    int a=10,b=6;
    printf("\nBefore increment: %d,%d",a,b);
    /*using shorthand*/
    a+=3;
    b-=1;
    printf("\nafter shorthand: %d,%d",a,b);

    a++;
    printf("\nafter increment %d",a);

    /*using pre increment*/
    b=a++;
    printf("\nafter pre increment %d,%d",a,b);

    /*using post increment*/
    b=++a;
    printf("\nAfter post increment %d,%d",a,b);

    return 0;





}
