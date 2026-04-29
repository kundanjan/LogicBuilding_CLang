/*
3.Write a program to find even factorial of given number.
Input :5
Output :8(4 * 2)
Input :-5
Output :8(4 * 2)
Input : 10
Output :3840(10 * 8 * 6 * 4 * 2)

*/


#include<stdio.h>

int EvenFactorial(int iValue)
{
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    int Evenfact = 1; 
    for(int i = 2;i<=iValue;i+=2)
    {
        Evenfact = Evenfact * i;
    }
    return Evenfact;
}

int main()
{
    int iNo = 0;
    printf("Enter the Number : ");
    scanf("%d",&iNo);

    printf("Even Factorial : %d\n",EvenFactorial(iNo));
    return 0;
}