/*

2.Write a program which accept number from user and print numbers till that
number.
Input :8
Output : 1 2 3 4 5 6 7 8

*/

#include<stdio.h>


void Display(int iNo)
{
    for(int i = 1;i<=iNo;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
}

int main()
{
    int iNum;
    printf("Enter the Number : ");
    scanf("%d",&iNum);

    Display(iNum);
    return 0;
}