#include<stdio.h>
int main()
{
    int a=10;
    char b='T';
    float c=1.25;


    //Declare pointer variable
    int *p; //we can directly initialize like int *p=&a;
    char *q; //we can directly initialize like int *q=&b;
    float *r; //we can directly initialize like int *r=&c;

    //initializing pointer

    p=&a;
    q=&b;
    r=&c;

     //understanding pointers
    printf("a value %d  is stored at address location %u\n",a,&a);
    printf("b value %c  is stored at address location %u\n",b,&b);
    printf("c value %f  is stored at address location %u\n",c,&c);

    printf("\n\n");

    printf("p value %d  is stored at address location %u\n",p,&p);
    printf("q value %d  is stored at address location %u\n",q,&q);
    printf("r value %d  is stored at address location %u\n",r,&r);

    //accessing pointer
   printf("\n\n");

   printf("a value is %d\n", a);  //Normal Accessing
   printf("a value through it's address or pointer is  %d\n", *p); // Accessing trough poointer
   return 0;


}
