/*

4. Write a program which accept number from user and count frequency of 4 in it.

Input : 2395
Output : 0

Input : 1018
Output : 0

Input : 9440
Output : 2

Input : 922432
Output : 1

*/

#include<stdio.h>

int CountFour(int iNo)
{
    int Count = 0;
    while(iNo != 0)
    {
        if(iNo % 10 == 4)
        {
            Count++;
        }
        iNo = iNo / 10;
    }

    return Count;
}

int main()
{
    int iValue=0;
    printf("Enter the number : ");
    scanf("%d",&iValue);
    printf("Frequency of 4: %d\n",CountFour(iValue));

    return 0;
}