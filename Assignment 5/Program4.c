/*

4. Write a program which accepts N from user and print all odd numbers up to N.
Input :18
Output :1 3 5 7 9 11 13

*/

#include<stdio.h>

void PrintOdd(int iNum)
{
    for(int i = 1;i<=iNum;i = i +2)
    {
        printf("%d ",i);
    }
    printf("\n");
}


int main()
{
    int iN;
    printf("Enter the Number : ");
    scanf("%d",&iN);
    PrintOdd(iN);
    return 0;
}