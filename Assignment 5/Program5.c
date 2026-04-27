/*

5. Write a program which accept N and print first 5 multiples of N.
Input :4
Output :4 8 12 16 20

*/

#include<stdio.h>

void Print_5Multiples(int iNo)
{
    for(int i = 1;i<=5;i++)
    {
        printf("%d ",(iNo*i));
    }
    printf("\n");
}


int main()
{
    int iValue;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    Print_5Multiples(iValue);
}

