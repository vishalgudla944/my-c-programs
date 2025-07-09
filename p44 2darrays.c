/*
#include<stdio.h>
int main()
{
    int i,j;
    int marks[5][6]={ {1,3,2,4,44,44},
                      {54,54,51,54,45,64},
                      {54,44,86,45,54,45},
                      {87,79,75,25,87,5},
                      {5,3,4,2,45,4},

                    };
   for(i=0;i<5;i++)
   {
       for(j=0;j<6;j++)
       {
           printf("%d,",marks[i][j]);

       }
       printf("\n");

   }
}
*/




//using scanf to take values for array

#include<stdio.h>
int main()
{
    int i,j;
    int marks[5][6];

    printf("Enter values:\n");

    for(i=0;i<5;i++)
   {

       for(j=0;j<6;j++)
       {
           scanf("%d",&marks[i][j]);

       }


   }


   for(i=0;i<5;i++)
   {
       for(j=0;j<6;j++)
       {
           printf("%d,",marks[i][j]);

       }
       printf("\n");

   }
}

