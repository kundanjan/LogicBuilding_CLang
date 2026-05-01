/*

1. Write a program which accept number from user and return the count of even digits.

Input : 2395
Output : 1

Input : 1018
Output : 2

Input : -1018
Output : 2

Input : 8462
Output : 4

*/

#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iCount=0;
    while(iNo != 0)
    {
        if((iNo % 10) % 2 == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iNo = 0;
    printf("Enter the Number : ");
    scanf("%d",&iNo);
    printf("Count of Even Numbers : %d\n",CountEvenDigits(iNo));

    return 0;
}