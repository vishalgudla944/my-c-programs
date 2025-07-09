#include<stdio.h>
int main()
{
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    if(a%2==0)
            printf("\033[1;33mEVEN NUMBER\033[0m\n");
    else
            printf("\033[1;31mNOT A EVEN NUMBER\033[0m\n");
    return 0;


}
