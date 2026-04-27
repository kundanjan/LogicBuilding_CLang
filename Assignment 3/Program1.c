/*
1.Write a program which accept one number from user and print that number of 
even numbers on screen. 

Input : 7
Output: 2 4 6 8 10 12 14

*/
#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo<=0){
        return;
    }
    int j = 2;
    for(int iVal = 0;iVal < iNo;iVal++){
        printf("%d ",j);
        j = j + 2;
    }
}


int main()
{
    int num = 0;
    printf("Enter a number : ");
    scanf("%d",&num);
    PrintEven(num);
    return 0;
}