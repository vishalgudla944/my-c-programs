#include<stdio.h>
int main()
{
    int subcount,marks,sum=0;
    float avg;
    for(subcount=1;subcount<=25;subcount++)
    {
        printf("\nEnter Subject %d Marks:",subcount);
        scanf("%d",&marks);
        sum=sum+marks;
        printf("\nsum is %d after subject %d :\n",sum,subcount);
    }
    avg=(float)sum/25;
    printf("\nAverage is: %f\n",avg);
    return 0;



}
