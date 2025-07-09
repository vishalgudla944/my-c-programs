#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;

    printf("Enter students Count:");
    scanf("%d",&n);
     //n=15
     int *ptr;
     ptr = (int *)malloc(n*sizeof(int));

     *ptr=10;
     printf("value %d is stored at location %u\n",*ptr,ptr);
     ptr++;

     *ptr=20;
      printf("value %d is stored at location %u\n",*ptr,ptr);
      ptr++;



      realloc(ptr,8);



      //free(ptr);

      *ptr=30;
      printf("value %d is stored at location %u\n",*ptr,ptr);
      ptr++;



}
