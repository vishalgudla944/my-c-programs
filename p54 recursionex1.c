//using recursion to find factorial
#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    printf("Recursion is %d",fact(n));
}
int fact(int n)
{
    int res;
    if (n==1)
        return 1;
    else
    res=n*fact(n-1);
    return res;
}
