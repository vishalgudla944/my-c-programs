#include<stdio.h>
int main()
{
    int year;
    printf("Enter Year To check it is LEAP YEAR or NOT:");
    scanf("%d",&year);
    if(year%4==0 && year%100 != 0)
        printf("\n%d is Leap Year",year);
    else if(year%400==0)
        printf("\n%d is a leap year",year);
    else
        printf("\n%d is NOT   a leap year",year);
    return 0;
}
