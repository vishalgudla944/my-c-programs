#include<stdio.h>
int main()
{
    //typedef used to create a alternative word for a particular datatype for Example
    //int ki twg ani alternative word ni create cheyyachu

    int a = 10;
    typedef int twg; //changed int to twg
    twg b = 20;
    printf("value of a is %d and b is %d",a,b);
    return 0;

}
