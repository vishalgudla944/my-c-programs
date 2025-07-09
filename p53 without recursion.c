//program without recursion
#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Recursion is %d", fact(n));
    return 0;

}
int fact(int n)
{
   int i,res=1;
   for (i=n;i>=1;i--)
   {
       res=res*i;
   }

   return res;
}
















