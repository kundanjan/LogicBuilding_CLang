/*

3. Write a program which accept number from user and count frequency of 2 in it.

Input : 2395
Output : 1

Input : 1018
Output : 0

Input : 9000
Output : 0

Input : 922432
Output : 3

*/

#include<stdio.h>

int CountTwo(int iNo)
{
    int Count = 0;
    while(iNo != 0)
    {
        if(iNo % 10 == 2)
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
    printf("Frequency of 2 : %d\n",CountTwo(iValue));

    return 0;
}