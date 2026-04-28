/*
3.Write a program to find factorial of given number.
Input : 5
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : -5
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : 4
Output : 24 (4 * 3 * 2 * 1)

*/


#include<stdio.h>

int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int fact = 1;
    for(int i = 1;i <= iNo;i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int iNum,iRet;

    printf("Enter the Number : ");
    scanf("%d",&iNum);

    iRet = Factorial(iNum);
    printf("Factorial of number is %d\n",iRet);
    

    return 0;
}