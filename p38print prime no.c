#include<stdio.h>
int main()
{
    int num,i,prime,j;
    printf("Enter number:");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        prime=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            prime=0;
        }

       if(prime==1)
        printf("\n%d",j);

    }


   return 0;



}



