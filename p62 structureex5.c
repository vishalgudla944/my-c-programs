//arrays of structures
#include<stdio.h>
#include<string.h>
struct student
{
    char name[300];
    int age;
    float avgmarks;
};
//declaring structure member as array;
//so we can use that as array to store data
// which reduces the usage of more member variables like s1 s2 s3
// instead we can use studentsinfo[3] and store the details.
struct student studentinfo[3];
int main()
{
   strcpy(studentinfo[0].name,"vishal");
   studentinfo[0].age = 19;
   studentinfo[0].avgmarks=88;

   strcpy(studentinfo[1].name,"siddhu");
   studentinfo[1].age = 17;
   studentinfo[1].avgmarks=80;

    strcpy(studentinfo[2].name,"Dil");
   studentinfo[2].age = 20;
   studentinfo[2].avgmarks=75;

   //printing
    printf(" Student 2 Details: \n %s \n %d \n %f",studentinfo[1].name,studentinfo[1].age,studentinfo[1].avgmarks);


// 60},{"suresh",50,37},{"rajesh",43,55}  };
//printing
printf("\n\nstudent 1 name is %s\n",studentinfo2[0].name);

return 0;


}

