/*
1.Write a program which accept number from user and display below pattern.
Input :5
Output : *****#####

Input :6
Output : ******######
Input : -5
Output : *****#####
Input :2
Output : **##

*/

#include<stdio.h>


void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(int i = 0;i<iNo;i++)
    {
        printf("*");
    }

    for(int i = 0;i<iNo;i++)
    {
        printf("#");
    }
    printf("\n");
}


int main()
{
    int iValue;
    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}