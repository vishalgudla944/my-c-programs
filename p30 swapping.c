#include<stdio.h>
int main()
{
   int a=10,b=20,temp;
   printf("A & B value Before Swap \n A = %d \n B = %d",a,b);
   temp=a;
   a=b;
   b=temp;
   printf("\nA & B value After Swap \n A = %d \n B = %d",a,b);
   return 0;


}
