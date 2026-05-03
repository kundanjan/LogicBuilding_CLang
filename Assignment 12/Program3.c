/*

3. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 3 iCol = 5
Output :
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

*/

#include<stdio.h>


void DisplayPattern(int iRow,int iCol)
{
    for(int i = 0;i<iRow;i++)
    {
        for(int j = iCol;j > 0;j--)
        {
            printf("%d ",j);
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