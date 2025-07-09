//structures vs unions
//structures and unions are almost same but with a small difference
//The memory allocated for a structure is the sum of the memory required for each member.
//All members of a union share the same memory space.
//Refer Notebook for clear understanding
#include<stdio.h>
struct student
{
    char name[300];
    int age;
    float avgmarks;
};
struct student s1;



union students
{
    char names[300];
    int ages;
    float avgmarkss;
};
union students s2;



int main()
{

// structure

  printf("Below Output Represents How structure store Data in Memory \n--------------------");


 strcpy(s1.name,"vishal");
 printf("\nname is: %s\n",s1.name);
 s1.age=19;
 printf("age is: %d\n",s1.age);
 printf("name is: %s\n",s1.name);
 s1.avgmarks=88;
 printf("avgmarks are: %f\n",s1.avgmarks);
 printf("name is: %s\n",s1.name);

 printf("\nThe memory allocated for a structure is the sum of the memory required for each member.\n");

 //union

 printf("\nBelow Output Represents How union store Data in Memory \n--------------------");

 strcpy(s2.names,"vishal");
 printf("\nname is: %s\n",s2.names);
 s2.ages=19;
 printf("age is: %d\n",s2.ages);
 printf("name is: %s\n",s2.names);
 s2.avgmarkss=88;
 printf("avgmarks are: %f\n",s2.avgmarkss);
 printf("name is: %s\n",s2.names);
 printf("\nAll members of a union share the same memory space.\n");


return 0;

}

