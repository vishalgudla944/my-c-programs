/*mainly special operator are used to reduce the code lines and know size of variable */
#include<stdio.h>
int main()
{
    int x,y;
    int z= (x=20,y=55,z=x+y);
    printf ("%d",z);
    return 0;
}

