#include<stdio.h>
int main()
{
    printf("Hi");
    goto third;

    printf("Welcome");

    third: printf("\tTelugu Web guru channel");
    goto fifth;

    printf("\tWe are learning");

    fifth: printf("\nC programming Course");

    return 0;

}
