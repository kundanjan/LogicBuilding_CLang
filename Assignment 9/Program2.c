/*

2. Write a program which accept number from user and check whether it contains 0 in it or not.

Input : 2395
Output : There is no Zero

Input : 1018
Output : It Contains Zero

Input : 9000
Output : It Contains Zero

Input : 10687
Output : It Contains Zero

*/

#include<stdio.h>

void FindZero(int iValue)
{
    while(iValue != 0)
    {
        if(iValue % 10 == 0)
        {
            printf("It Contains Zero\n");
            return;
        }
        iValue = iValue / 10;
    }

    printf("There is no Zero\n");
}

int main()
{
    int iValue=0;
    printf("Enter the number : ");
    scanf("%d",&iValue);
    FindZero(iValue);

    return 0;
}