/*

1. Accept number from user and display below pattern.

Input : 5
Output : A B C D E

*/

#include<stdio.h>

void Display(int iNo)
{
    for(int i = 0;i<5;i++)
    {
        printf("%c ",65+i);
    }
    printf("\n");
}

int main()
{
    int iNo = 0;
    printf("Enter the number : ");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;
}