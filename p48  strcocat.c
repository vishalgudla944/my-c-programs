#include<stdio.h>
int main()
{
    char p1[] ={ 't','e', 'l', 'u', 'g', 'u', '\0'  };
    char p2[] ={ 'c', 'a', 'v', 'e', '\0' };
    char p3[] ={ 'c', 'h', 'a', 'n', 'n', 'e', 'l', '\0' };
    char output[100];
    int i,j,k;
    for (i=0;p1[i]!='\0';i++)
    {
        output[i]=p1[i] ;
    }
     output[i]=' ';
     i++;


    for (j=0;p2[j]!='\0';j++)
    {
        output[i+j]=p2[j];
    }
    output [i+j]=' ';
    j++;


    for (k=0;p3[j];k++)
    {
       output[i+j+k]=p3[k];
    }

    printf("Concatenation of P1 P2 p3 is %s", output );
    return 0;

}
