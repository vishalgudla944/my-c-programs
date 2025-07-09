
/*
//understanding storage classes
// there are 4 types of storage classes are there
//they are 1.AUTOMATIC 2.EXTERNAL  3.STATIC 4.REGISTER

#include<stdio.h>
void show (void);
extern int d; // external is nothing but global variable
int main()
{

  printf("value of d in main is %d\n", d);
  show();
  return 0;
}


void show (void)
{

    auto int q=20; // auto is nothing but local variable
    printf("Value of q is %d\n",q);
    printf("value of d in show is %d\n",d);
}
 int d = 13;

 */

 // using static storage class

 #include<stdio.h>
 void show (void);
 int main()
 {
     show();
     show();
     show();
     show();
     show();
     return 0;
 }
 void show (void)
 {
     static int a=20;
     printf("Value of a is %d\n",a);
     a=a+1;
 }
















