#include<stdio.h>
int main()
{
    float agg;
    printf("Enter your aggregate:");
    scanf("%f",&agg);
    if(agg>60)
        printf("Congrats you are eligible to apply this job\n");
    return 0;
}
