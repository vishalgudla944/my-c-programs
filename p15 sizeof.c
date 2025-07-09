#include<stdio.h>
int main()
{
    int x,y;
    int z= (x=20,y=55,z=x+y);
    printf ("size of Z is %d",sizeof(z));
    return 0;
}
