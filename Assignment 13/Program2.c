/*

2. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 4
Output :
A B C D
a b c d
A B C D
a b c d

*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    for(int i = 0;i<iRow;i++)
    {
        for(int j = 0;j<iCol;j++)
        {
            if(i % 2 == 0)
            {
                printf("%c ",65+j);
            }
            else{
                printf("%c ",97+j);
            }
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