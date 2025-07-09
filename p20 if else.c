#include<stdio.h>
int main()
{
    float agg;
    printf("Please Enter your aggregate:");
    scanf("%f ",&agg);
    if(agg>=60)

        printf("Congrats you are eligible to apply for this job");
    else
     printf("Sorry, you are not eligible for this job");

    return 0;


}
