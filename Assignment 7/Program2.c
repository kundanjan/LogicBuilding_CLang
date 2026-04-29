/*
2. Accept amount in US dollar and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees.
Input :10
Output : 700
Input :3
Output :210
Input :1200
Output :84000

*/

#include<stdio.h>


int DollarToINR(int iNo)
{
    return (iNo * 70);
}

int main()
{
    int iDollar;
    printf("Enter the Number : ");
    scanf("%d",&iDollar);
    printf("$%d in INR : %d\n",iDollar,DollarToINR(iDollar));   

}