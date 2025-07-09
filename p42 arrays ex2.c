#include<stdio.h>
int main()
{
    int marks[6];
    int i;
    for(i=0;i<=5;i++)
    {
        printf("Enter Marks:\n");
        scanf("%d",&marks[i]);
    }
     for(i=0;i<=5;i++)
    {
        printf("%d,",marks[i]);
    }

    return 0;
}
