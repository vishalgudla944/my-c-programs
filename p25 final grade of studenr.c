#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,grade;
    printf("Enter your Marks:");
    scanf("%f,%f,%f,%f", &m1,&m2,&m3,&m4);
    grade=(m1+m2+m3+m4)/4;
    printf("\nYOUR GRADE IS %f ::::: ",grade);

    if(grade<40)
       {

            printf("\033[1;31mFAIL\033[0m\n");

       }    else
       {
            printf("\033[1;32mPASS\033[0m\n");
       }
    return 0;

}
