#include<stdio.h>
#include<string.h>
int main()
{
    char c1[]="Teluguwebguru";
    char c2[]="Englishcave";

   /* printf("\nIntial c1 value:%s",c1);
    printf("\nIntial c2 value:%s",c2);

    strncpy(c1,c2,6); // here the the first 6 characters copied to c1 from c2

     printf("\nafter strncpy c1 value:%s",c1);
    printf("\nafter strncp c2 value:%s",c2);

-------------------------------------------------------------------------*/


   /* int res = strncmp (c1,c2,6); // here the first 6 characters of c2 compared to c1 then output will come if those are equal the output is 0 else the output not equal to zero
    printf("\n%d",res);

--------------------------------------------------------------------------*/

  /* printf("\nIntial c1 value:%s",c1);
   printf("\nIntial c2 value:%s",c2);

   strncat(c1,c2,6); // here the first 6 character of c2 is added to c1

     printf("\nafter strncat c1 value:%s",c1);
    printf("\nafter strncat c2 value:%s",c2);
    return 0;
-------------------------------------------------------------------------*/
int res = strstr(c1,"Tel"); // strtstr anedi manam " " lo rasina characters andulo unnaya leda ani telusukodaniki use chestam
printf("%d",res); // here strstr check whether 'vis' is in c1 or not. oka vela 'vis' c1 lo unte output oka positive value vastundi lekapote '0' vastundi







    return 0;
}
