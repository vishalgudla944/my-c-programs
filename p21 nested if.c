#include<stdio.h>
int main()
{
    int a;
    printf("Enter your aggregate:");
    scanf("%d",&a);
    if(a>=60)
    {
        if(a>=75)
            printf("\nCongrats you are eligible for Interview");
        else
            printf("\nYou can attempt for Written Test");
    }
    else
        printf("\nSorry, you are not eligible for interview");
    return 0;
}
