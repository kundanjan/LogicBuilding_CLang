/*

5. Write a program which accept number from user and count frequency of such a digits which are less than 6.

Input : 2395
Output : 3

Input : 1018
Output : 3

Input : 9440
Output : 3

Input : 96672
Output : 1

*/


#include<stdio.h>

int CountLessThan6(int iNo)
{
    int Count = 0;
    while(iNo != 0)
    {
        if(iNo % 10 < 6)
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
    printf("Frequency of Numbers <6: %d\n",CountLessThan6(iValue));

    return 0;
}