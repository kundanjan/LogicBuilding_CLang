/*

2. Accept number from user and display below pattern.

Input : 5
Output : 5 # 4 # 3 # 2 # 1 #

*/

#include<stdio.h>


void Display(int iNo)
{
    for(int i = iNo;i > 0; i--)
    {
        printf("%d # ",i);
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