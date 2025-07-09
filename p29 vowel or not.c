#include<stdio.h>
int main()
{
      char v;
      printf("Enter Any Alphabet:");
      scanf("%c",&v);
      if(v=='a' || v=='e' || v==  'i' || v== 'o' || v== 'u' || v== 'A' || v== 'E' || v== 'I' || v== 'O' || v== 'U')
        {

        printf("\n%c is an vowel",v);
        }

      else
        {
            printf("%c is not vowel",v);

        }


      return 0;
}
