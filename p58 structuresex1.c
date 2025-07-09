//defining, declaring and initialization of structures
#include<stdio.h>
#include<string.h>


struct student
{
    char name[300];
    int age;
    float avgmarks;

}s1,s2,s3 ; //one type of declaring variables

struct student s4,s5; //another type of declaring variables



int main()
{
    strcpy(s1.name,"vishal");
    s1.age=19;
    s1.avgmarks=88;

    printf("student name is %s\n",s1.name);
     printf("student age is %d\n",s1.age);
      printf("student avgmarks are %f\n",s1.avgmarks);
    return 0;
}

