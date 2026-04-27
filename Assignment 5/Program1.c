/*
1.Write a program which accept number from user and print that number of $ & *
on screen.

Input :5
Output :$*$*$*$*$*
Input :3
Output :$*$*$*
Input :-3
Output :$*$*$*


*/

#include<stdio.h>

void PrintPattern(int Num)
{
    if(Num < 0)
        Num = -Num;
    
    for(int i = 0; i < Num;i++)
    {
        printf("$*");
    }
    printf("\n");
}

int main()
{
    int iValue;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    PrintPattern(iValue);
    return 0;
}