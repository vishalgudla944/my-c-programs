//initialization a variable while declaring
#include<stdio.h>
struct student
{
    char name[300];
    int age;
    float avgmarks;
};



struct student s1={"vishal",19,85};
int main()
{
    printf("\astudent name  is %s, Age is %d and avgmarks are %f",s1.name,s1.age,s1.avgmarks);
}
