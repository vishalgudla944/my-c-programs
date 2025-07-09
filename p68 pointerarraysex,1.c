#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int i;
    int *p;
     p=a;
    //accessing through normal indexing

    /* for(i=0;i<5;i++)
     {
         printf("Array [%d] value is %d its memory address is %u\n",i,a[i],&a[i]);
     } */



     //accessing through pointer (memory address)

     while(p<=&a[4])
     {
         printf("element is %d\n",*p);
         p++;
     }

     printf("\np value is %d\n",p);
     printf("p+1 value is %d\n",p+1);
     printf("p+2 value is %d\n",p+2);
     printf("p+3 value is %d\n",p+3);
     printf("p+4 value is %d\n",p+4);

/*
     printf("\nFirst  value is %d\n",*p);
     printf("second value is %d\n",*(p+1));
     printf("third value is %d\n",*(p+2));
     printf("fourth value is %d\n",*(p+3));
     printf("fifth value is %d\n",*(p+4));
*/
     return 0;



}
