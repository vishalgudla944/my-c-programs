#include<stdio.h>
#include<string.h>
int main()
{
    char c[11]={ 't', 'e', 'l', 'u', 'g', 'u', 'c', 'a', 'v', 'e','\0'};
    char n[11];
    /*int i;
    for(i=0;c[i]!='\0';i++)
    {
        n[i]=c[i];
    }
    n[i]='\0';
    printf("Size of array C is : %d",i+1); // we should give i+1 because array index value starts from 0
    printf("\nAfter copy --> %s",n);
    return 0;*/

   strcpy(n,c);
   printf("%s",n);
   printf("\nSize of Array C is: %d", strlen(c ));
   return 0;

}
