#include<stdio.h>
int main()
{
    int a[2][3]={ {10,20,30},{40,50,60}  };
    //accessing through indexing
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nArray [%d] [%d] value is %d stored at %u\n ",i,j,a[i][j],&a[i][j]);
        }
    }

    //accessing through pointer

    int *p;
    p=a;

     printf("\np value is %d\n",p);
     printf("p+1 value is %d\n",p+1);
     printf("p+2 value is %d\n",p+2);
     printf("p+3 value is %d\n",p+3);
     printf("p+4 value is %d\n",p+4);
     printf("p+5 value is %d\n",p+5);


     printf("\nFirst row first column value is %d\n",*p);
     printf("\nFirst row second column value is %d\n",*(p+1));
     printf("\nFirst row third column value is %d\n",*(p+2));
     printf("\nsecond row first column value is %d\n",*(p+3));
     printf("\nsecond row second column value is %d\n ",*(p+4));
     printf("\nsecond row third col0umn value is %d\n ",*(p+5));

     return 0;




}
