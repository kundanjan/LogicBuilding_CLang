/*
5. Write a program which accept area in square feet and convert it into square meter.

(1 square feet = 0.0929 Square meter)

Input : 5
Output : 0.464515

Input : 7
Output : 0.650321
*/


#include<stdio.h>

float SquareFeetToSquareMeter(float fSqFeet)
{
    return (fSqFeet * 0.0929);
}

int main()
{
    float fSqFeet = 0;
    printf("Enter the area in Square Feet : ");
    scanf("%f",&fSqFeet);
    printf("Area in Square meter : %f\n",SquareFeetToSquareMeter(fSqFeet));

    return 0;
}