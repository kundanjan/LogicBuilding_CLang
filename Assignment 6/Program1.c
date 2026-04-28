/*
1. Write a program which accept number from user and if number is less than 50
then print small , if it is greater than 50 and less than 100 then print medium, if it is
greater than 100 then print large.

Input : 75
Output : Medium
*/

#include<stdio.h>


void PrintSize(int iValue)
{
    if(iValue < 50)
    {
        printf("small\n");
    }
    else if(iValue < 100)
    {
        printf("medium\n");
    }
    else{
        printf("large\n");
    }
}

int main()
{
    int iVal;

    printf("Enter the Number : ");
    scanf("%d",&iVal);

    PrintSize(iVal);    
    return 0;
}