/*

1. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 3
Output :

* * *
* * *
* * *
* * *

*/

#include<stdio.h>


void DisplayPattern(int iRow,int iCol)
{
    for(int i = 0;i<iRow;i++)
    {
        for(int j = 0;j < iCol;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int iRow =0 , iCol = 0;
    printf("Enter Row : ");
    scanf("%d",&iRow);

    printf("Enter Col : ");
    scanf("%d",&iCol);

    DisplayPattern(iRow,iCol);

    return 0;
}