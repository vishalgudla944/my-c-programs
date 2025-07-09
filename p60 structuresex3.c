//copying, comparing and operations on individual members
#include<stdio.h>
#include<string.h>
struct student
{
    char name[300];
    int age;
    float avgmarks;
};

struct student s1={"vishal",19,88};
struct student s2={"siddhu",17,80};
struct student s3;

int main()
{       printf("\ns3 before copy : %s  %d  %f\n",s3.name,s3.age,s3.avgmarks);
    //copying s1 data to s3
        s3=s1;

       printf(" \ns3 after copy : %s  %d  %f\n",s3.name,s3.age,s3.avgmarks);


    //comparing s1 and s2

    if( strcmp(s1.name,s2.name) == 0 && s1.age==s2.age && s1.avgmarks == s2.avgmarks )
    {
        printf("\nBoth are Equal\n");
    }
    else
    {
        printf("\nBoth are Not equal\n");
    }

   //operations on individual members
   //we can use this members as normal variables
   //example we can a+b; like that we can do s1.age +1
   // or s1.age+s2.age and other operations. Let's do some operations

   printf("\n%d\n", s1.age+1);

    printf("\n%d\n", s1.age+s2.age);


 return 0;

}

