/*

5. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 3 iCol = 4
Output :
1 2 3 4
5 6 7 8
9 10 11 12

*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int counter = 1;
    for(int i = iRow;i>0;i--)
    {
        for(int j = 0;j<iCol;j++)
        {
            printf("%d ",counter);
            counter++;
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