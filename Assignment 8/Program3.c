/*
3. Write a program which accept distance in kilometre and convert it into meter.

(1 kilometre = 1000 Meter)

Input : 5
Output : 5000

Input : 12
Output : 12000
*/

#include<stdio.h>


int KilometerToMeter(int iKiloMeter)
{
    return (iKiloMeter * 1000);
}


int main()
{
    int iKilo = 0;
    printf("Enter Distance in Kilometer : ");
    scanf("%d",&iKilo);
    printf("In Meter : %d\n",KilometerToMeter(iKilo));
    return 0;
}