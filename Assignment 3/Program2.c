/*
2. Write a program which accept number from user and print factors of that 
number.  
Input :  24
Output:  1 2 4 6 8 12

*/

#include<stdio.h>

void PrintFactors(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(int i = 1; i <= iNo / 2; i++)
    {
        if(i == 1 || i % 2 == 0 && iNo % i == 0)
            printf("%d ",i);
    }
}

int main()
{
    int iNum = 0;
    printf("Enter the number : ");
    scanf("%d",&iNum);
    PrintFactors(iNum);

    return 0;
}