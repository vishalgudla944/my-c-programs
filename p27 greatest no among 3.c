#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter THREE Number:");
    scanf("%f,%f,%f", &a,&b,&c);
    if(a>b)
    {
        if(a>=c)
            printf("\n%f is greater",a);
           else
        printf("\n%f is greater",c);
    }
   if (b>=a)
   {
       if(b>=c)
        printf("\n%f is greater",b);
        else
        printf("\n%f is greater",c);
   }
   return 0;





}
