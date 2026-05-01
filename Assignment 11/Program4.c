/*

4. Accept number from user and display below pattern.

Input : 4
Output : # 1 * # 2 * # 3 * # 4 *

*/

#include<stdio.h>

void Display(int iNo)
{
    for(int i = 1;i <= iNo; i++)
    {
        printf("# %d * ",i);
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