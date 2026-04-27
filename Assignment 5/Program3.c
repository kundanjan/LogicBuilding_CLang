/*
3. Write a program which accept number from user and print its numbers line.
Input :4
Output :-4 -3 -2 -1 0 1 2 3 4

*/

#include<stdio.h>

void PrintNumberLine(int iLimit)
{
    for(int i = -iLimit;i<=iLimit;i++)
    {
        printf("%d ",i );
    }
    printf("\n");
}

int main()
{
    int iValue;
    printf("Enter the Number : ");
    scanf("%d",&iValue);
    PrintNumberLine(iValue);
    return 0;
}