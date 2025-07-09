#include<stdio.h>
int main()
{
    int n,i,prime=1;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        prime=0;
    }
    if(prime==1)
        printf("\n%d is prime number\n",n);
    else
        printf("\n%d is not prime\n",n);
    return 0;

}
