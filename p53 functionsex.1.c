#include<stdio.h>
//STEP-3 Declaring Function
//Here Declaring function is NOT necessary in Latest IDE but in olden days Declaring Function is Necessary
//For good Programing style we should write DECLARING OF FUNCTONS
int accountopening(void);
int deposite(void);
int balancecheck(void);
int withdraw(void);

int main()

{
 //STEP-2 calling of function
 accountopening();

 printf("\n");

 deposite();

 printf("\n");

 balancecheck();

 printf("\n");

 withdraw();

printf("\n");

}
//STEP-1 definition of function -- defining function structure (1)datatype/return value (2)Function Name (3)Parameter/Argument
//Here We are taking BANKING AS EXAMPLE


int accountopening(void) //here int is --> datatype/return value, Accountopening--> Function Name, ()--> parameter/Argument. if we don't need any parameter/argument we should give void as parameter
{
    printf("AccountOpening function Executed");
    return 0;
}
int deposite(void)
{
    printf("deposite function Executed");
    return 0;

}
int balancecheck(void)
{
    printf("balance check Executed");

}

int withdraw(void)
{
    printf("withdraw function Executed");
    return 0;

}

