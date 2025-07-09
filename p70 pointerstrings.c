#include<stdio.h>
int main()
{
    char *name1="vishal";
    char *name1d;
    name1d=name1;
    printf("name is %s\n",name1);

    while(*name1!='\0')
    {
        printf("\n%c is stored at %u\n",*name1,name1);
        name1++;
    }
    printf("\nLength of the string is %d\n",(name1-name1d));
    return 0;

}
