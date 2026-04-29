/*
5. Write a program which returns difference between Even factorial and odd factorial
of given number.

Input :5
Output :-7(8 - 15)
Input :-5
Output :-7(8 - 15)
Input :10
Output :2895(3840 - 945)

*/

#include<stdio.h>


int FactorialDiff(int iNo)
{
    if(iNo < 0) iNo = -iNo;
    
    int OddFact = 1,EvenFact = 1;
    for(int i = 1;i<=iNo;i++)
    {
        if(i % 2 == 0)
        {
            EvenFact *= i;
        }
        else
        {
            OddFact *= i;
        }
    }

    return (EvenFact - OddFact);
}

int main()
{
    int iNo = 0;
    printf("Enter the Number : ");
    scanf("%d",&iNo);

    printf("Difference Betn Factorial : %d\n",FactorialDiff(iNo));
    return 0;
}

