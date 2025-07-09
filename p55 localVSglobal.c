//local variable And Global variable;
//Internal variable --> LOCAL VARIABLE;
//External variable --> GLOBAL VARIABLE;
//oka function lopala declare chese vatini LOCAL VARIABLE antaru Ex-- int main() lo rasevi ina user defined lo ichevi ina kavach;
//anni functions ki bayata declare chesevatini GLOBAL VARIABLE antaru EX: asalu lo declare cheyyaru bayata declare chestam;

#include<stdio.h>
int a=20;
int main()

{
 int b=30;
 printf("Main Functoin Variable value:%d\n",b);
 show();
 add(1+2);

 return 0;

}
void show(void)
{
    int c=20;
    printf("Global variable value in show function %d\n",a);
    return c;


}
int add(int d, int e)
{
    printf("Global variable value in add function %d\n",a);
    return d+e;
}

// Here a is global variable --because that is declared outside of all functions
// other variables are local varibles --because those are declared inside the function
// a variable ni eh function ina vadukovachu endukante adi global variable kabbati
//main function lo ina show function lo ina add function lo ina vadachu
//kani (global variables) oka function lo declare chesina variable ni inko function lo declare chesi use cheskovadam kudaradu
//endukanti adi local variable kabatti ex: MAIN function lo b=30; undi kada ippudu SHOW function ki velli
//b ni print cheyyadaniki try cheste error vastundi.
//nenu MAIN function lo unna b=30; ane danni teesko SHOW() ane function lo use cheyyalenu because already MAIN function lo declare ayyi undi  kabatti
//ippudu global variable a=20; ani undi kada, danni akkade unchi malli nenu main function lo a=30; ani rasi print cheste
// output 30 vastundi enduku ante oka function execute ayyetappudu first preference local variable ki istundi
//GLOBAL VARIABLE ni nenu Eh function lo rasina execute avtundi!
//these are main difference b/w GLOBAL & LOCAL VARIBALES.



