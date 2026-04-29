/*
4. Write a program which accept temperature in Fahrenheit and convert it into celsius.

(1 celsius = (Fahrenheit -32) * (5/9))

Input : 10
Output : -12.2222

Input : 34
Output : 1.11111
*/

#include<stdio.h>

double FahrenheitToCelsius(float iFahr)
{
    
    return (double)(iFahr  - 32) * 5/9;
}

int main()
{
    float iFahrenheit = 0;
    printf("Enter the temperature in Fahrenheit : ");
    scanf("%f",&iFahrenheit);
    printf("Temperature in Celsius : %lf\n",FahrenheitToCelsius(iFahrenheit));   

    return 0;
}