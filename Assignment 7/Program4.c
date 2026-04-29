/*
4. Write a program to find odd factorial of given number.

Input : 5
Output : 15 (5 * 3 * 1)

Input : -5
Output : 15 (5 * 3 * 1)

Input : 10
Output : 945 (9 * 7 * 5 * 3 * 1)

*/


#include<stdio.h>

int OddFactorial(int iValue)
{
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    int Oddfact = 1; 
    for(int i = 1;i<=iValue;i+=2)
    {
        Oddfact = Oddfact * i;
    }
    return Oddfact;
}

int main()
{
    int iNo = 0;
    printf("Enter the Number : ");
    scanf("%d",&iNo);

    printf("Odd Factorial : %d\n",OddFactorial(iNo));
    return 0;
}