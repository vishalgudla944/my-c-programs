/*program to character arrays in c programming*/
#include<stdio.h>
int main()
{
    /*
    char channel[4]="twg";
    printf("%s",channel);
    return 0;

    */

   // ---------------------------------------------------------------------

   /*
   char name[7];
    printf("Enter name:");
    scanf("%s",name); //in strings '&' is not mandatory
    printf("\nName is %s",name);
    return 0;
    */

    //----------------------------------------------------------------------

    /*
    char channel[100],channel2[100];
    printf("Enter Channel Name:");
    scanf("%s",channel);
    scanf("%s",channel2);

    printf("\n%s",channel);
    printf("%s",channel2);
    return 0;
    //If we enter SPACCE while giving Input it won't take the data after SPACE. For this we should create new CHAR STRING (EX: channel2 in above program
   */

    //------------------------------------------------------------------------



    /*

    char channel[100];
    printf("Enter Name:");
    scanf("%4s",channel);

    //ikka nenu (STRING) DATA SPECIFIER mundu '4' ichanu, so ippudu print ayye output first 4 characters ni matrame print chestundi EX ne 'telugucave' ani enter cheste only 'telu' ani matrame print avtundi ila manam enni character printf kavala teluste akkada number change cheskovachu


    printf("\n%s",channel);
    return 0;
    */
    //---------------------------------------------------------------------------

    char channel[100];
    printf("Enter Channel Name :");
    gets(channel);
    /* ikkada manam 'SCANF' badulu 'GETS' use chesam ante manam input iche data lo SPACE enter chesina
    adi ah string lo data la ne store avtundi. paina FIRST PROGRAM laaga NEW VARIABLES in insert cheyyalsina
    avasaram ledu. GETS---> GET_STRING*/

    printf("%s",channel);
    return 0;










}
