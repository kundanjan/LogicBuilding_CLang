/*

5. Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

Input : 2395
Output : -15 (2 - 17)

Input : 1018
Output : 6 (8 - 2)

Input : 8440
Output : 16 (16 - 0)

Input : 5733
Output : -18 (0 - 18)

*/

#include<stdio.h>

int DifferenceSumEvenOdd(int iNo)
{
    int iEvenSum = 0,iOddSum = 0;
    while(iNo!=0)
    {
        int iRem = iNo%10 ;
        if(iRem % 2 == 0)
            iEvenSum += iRem;
        else
            iOddSum += iRem;

        iNo = iNo / 10;
    }
    return (iEvenSum - iOddSum);
}

int main()
{
    int iNo = 0;
    printf("Enter the Number : ");
    scanf("%d",&iNo);
    printf("Difference Between Even digit Sum and Odd digit Sum : %d\n",DifferenceSumEvenOdd(iNo));
    return 0;
}