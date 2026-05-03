/*

5. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 4
Output :
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4

*/

#include<stdio.h>


void DisplayPattern(int iRow,int iCol)
{
    for(int i = 1;i<=iRow;i++)
    {
        for(int j = 1;j <= iCol;j++)
        {
            printf("%d ",i);
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