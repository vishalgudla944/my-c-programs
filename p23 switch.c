#include<stdio.h>
int main()
{
    int a=10;

  {

    switch(a)
    {


       case 0:printf("NOT MATCHED");
       break;
       case 1 : printf("NOT MATCHED");
       break;
       case 2 : printf("NOT MATCHED");
       break;
       case 10: printf("MATCHED");
       break;
       case 5 : printf("NOT MATCHED");
       break;
       default: printf("ERROR");
       break;

  }

  }
  return 0;

}
