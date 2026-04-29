/*
1. Write a program which accept radius of circle from user and calculate its area.
   Consider value of PI as 3.14. (Area = PI * Radius * Radius)

Input : 5.3
Output : 88.2026

Input : 10.4
Output : 339.6224

*/

#include<stdio.h>

float AreaOfCircle(float fRadius)
{
    float fArea = 3.14 * fRadius * fRadius;
    return fArea;
}

int main()
{
    float fRad = 0;
    printf("Enter the Radius of the Circle : ");
    scanf("%f",&fRad);

    printf("Area of Circle : %.4f\n",AreaOfCircle(fRad));

    return 0;
}