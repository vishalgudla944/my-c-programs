//structures within structures

#include<stdio.h>
#include<string.h>
struct student
{
    char name[300];
    int age;
    float avgmarks;
    struct address
    {
        char city[200];
        char pincode[10];
        char street[150];

    }adr;
};
    struct student s1,s2,s3;

    int main()
    {

      strcpy(s1.name,"Vishal");
      s1.age=19;
      s1.avgmarks=88;
      strcpy(s1.adr.city,"Manuguru");
      strcpy(s1.adr.pincode,"507117");
      strcpy(s1.adr.street,"Ashok nagar");

      printf("Student details:\nName: %s\nAge: %d\nAverage Marks: %f\nCity: %s\nPincode: %s\nStreet: %s\n",
       s1.name, s1.age, s1.avgmarks, s1.adr.city, s1.adr.pincode, s1.adr.street);

      return 0;


    }





