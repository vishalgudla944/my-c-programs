#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1 || i==5 || i==j)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;

}
