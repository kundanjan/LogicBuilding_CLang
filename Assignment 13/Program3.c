/*

3. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 3 iCol = 5
Output :
A A A A A
B B B B B
C C C C C

*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    for(int i = 0;i<iRow;i++)
    {
        for(int j = 0;j<iCol;j++)
        {
            printf("%c ",65+i);
        }
        printf("\n");
    }
}

int main()
{
    int iRow = 0,iCol = 0;

    printf("Enter Rows : ");
    scanf("%d",&iRow);

    printf("Enter Cols : ");
    scanf("%d",&iCol);

    DisplayPattern(iRow,iCol);
    return 0;
}