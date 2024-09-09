#include <stdio.h>
int main()
{
    float f,c;
    printf("Enter the temperature in Fahrenheit:");
    scanf("%f",&f);
    c= (f-32)*5/9;
    printf("The temperature in Celsius: %.2f\n",c);
    return 0;
}