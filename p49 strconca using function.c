#include<stdio.h>
#include<string.h>
int main()
{
    char p1[] ={ 't','e', 'l', 'u', 'g', 'u', '\0'  };
    char p2[] ={ 'c', 'a', 'v', 'e', '\0' };
    char p3[] ={ 'c', 'h', 'a', 'n', 'n', 'e', 'l', '\0' };
    char output[100];
    strcat(output,p1);

    strcat(output,p2);

    strcat(output,p3);

    printf("%s",output);
    return 0;

}



