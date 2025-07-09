#include <stdio.h>
int main()
{
    float f,c;
    printf("Enter fahrenheit value:");
    scanf("%f",&f);
    c=((f-32)*5/9);
    printf("Celsius value is %f ",c);
    return 0;

}
