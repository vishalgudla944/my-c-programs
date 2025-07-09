#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    printf("Enter String 1 characters:");
    scanf("%s",str1);
    printf("\nEnter String 2 characters:");
    scanf("%s",str2);

     int res= strcmp(str1,str2);
     printf("\nValue is %d ", res );
     if(res==0)
     {
         printf("\nSTRINGS ARE EQUAL");

     }
     else
     {
         printf("\n\nSTRINGS ARE NOT EQUAL");
     }
     return 0;






    }
