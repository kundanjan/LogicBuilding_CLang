/*

4. Write a program which accept number from user and return multiplication of all digits.

Input : 2395
Output : 270

Input : 1018
Output : 8

Input : 9440
Output : 144

Input : 922432
Output : 864

*/

#include<stdio.h>

int CountBetween3and7(int iNo)
{
    int iMul = 1;
    while(iNo != 0)
    {
        if(iNo % 10 != 0)
            iMul = iMul * (iNo % 10);
        iNo = iNo / 10;
    }
    return iMul;
}

int main()
{
    int iNo = 0;
    printf("Enter the Number : ");
    scanf("%d",&iNo);
    printf("Multiplication of Digits: %d\n",CountBetween3and7(iNo));

    return 0;
}