//POINTER EXPRESSIONS
#include<stdio.h>
int main()
{
    int a=10;
    int b=35;
    int *p=&a;
    int *q=&b;

    printf("a+2 is %d\n",(a+2));
    printf("*p+2 is %d\n",(*p+2));
    printf("a+b is %d\n",(a+b));
    printf("*p+*q is %d\n",(*p+*q));
    printf("*p/ *q is %d\n",(*p/ *q)); // we should give space to / * in (*p/ *q) otherwise it consider as comment



}
