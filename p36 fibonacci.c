#include<stdio.h>
int main()
{
    int a=0,b=1,n,sum;
    printf("Enter number Before you want fibonacci series: ");
    scanf("%d",&n);
    printf("%d \n%d",a,b);
    sum=a+b;
    while(sum<=n)
    {
        printf("\n%d",sum);
        a=b;
        b=sum;
        sum=a+b;

    }
    return 0;

}
