//CHAIN OF POINTERS
#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    int  **q=&p;
    printf("a value %d  is stored at address location %u\n",a,&a);
     printf("p value %d  is stored at address location %u\n",p,&p);
      printf("q value %d  is stored at address location %u\n",q,&q);
       printf("a value through *p is : %d\n",*p);
        printf("a value through **q is :%d\n",**q);
         return 0;
}
