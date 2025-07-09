#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    printf("Enter String 1 characters:");
    scanf("%s",str1);
    printf("\nEnter String 2 characters:");
    scanf("%s",str2);
    int i=0;
    while(str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0')
    {
        i++;
    }
    if(str1[i]=='\0' && str2[i]=='\0')
    {
        printf("\nSTRING IS EQUAL");
    }

    else
        {
           printf("\nSTRING IS NOT EQUAL");
        }

    return 0;
}
