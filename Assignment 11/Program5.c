/*

5. Accept number from user and display below pattern.

Input : 8
Output : 2 4 6 8 10 12 14 16

*/

#include<stdio.h>

void Display(int iNo)
{
    for(int i = 1;i <= iNo; i++)
    {
        printf("%d ",i * 2);
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