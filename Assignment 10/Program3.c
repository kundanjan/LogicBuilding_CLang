/*

3. Write a program which accept number from user and return the count of digits in between 3 and 7.

Input : 2395
Output : 1

Input : 1018
Output : 0

Input : 4521
Output : 2

Input : 9922
Output : 0

*/

#include<stdio.h>

int CountBetween3and7(int iNo)
{
    int iCount=0;
    while(iNo != 0)
    {
        if((iNo % 10) > 3 && (iNo % 10)<7)
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
    printf("Count of Numbers Between 3 and 7: %d\n",CountBetween3and7(iNo));

    return 0;
}