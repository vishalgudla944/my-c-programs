#include<stdio.h>
int main()
{
    int a;
    printf("Enter your marks:");
    scanf("%d",&a);
    if(a>=70 && a<=100)
    {
        printf("\nDistinction");
    }

    else if (a>=60 && a<=100)
        {
        printf("\nFirst Class");
        }
    else if (a>=50&& a<=100)
          {
        printf("\nSecond Class");
          }
    else if (a>=40&& a<=100)
        {
        printf("\nJust Pass");
        }
    else if (a>100 || a<1)
    {
        printf ("\nERROR! Enter Valid Marks");
    }
    else
    {
        printf ("\nFAIL");
    }
    return 0;


}
