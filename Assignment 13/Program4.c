/*

4. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 5
Output :
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1

*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    for(int i = iRow;i>0;i--)
    {
        for(int j = 0;j<iCol;j++)
        {
            printf("%d ",i);
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