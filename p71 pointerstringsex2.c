#include<stdio.h>
int main()
{
    char namesarray[3][50]={ "santosh","twg","web guru"   };
    char *names[3]={  "santosh", "twg" , "web guru"  };
    int i,j;

    printf("\nUsing Character arrays\n");

    /*character array*/

    for(i=0;i<3;i++)
    {
        for(j=0;j<50;j++)
        {
            printf("\ncharacter is %c is stored at %u\n",namesarray[i][j],&namesarray[i][j]);

        }
          printf("\n");

    }


          printf("\nUsing pointer method\n");

          //pointer array

          for(i=0;i<3;i++)
          {
              printf("%s\n",names[i]);
              printf("starting Location : %u\n",names[i]);
          }






       return 0;
}
