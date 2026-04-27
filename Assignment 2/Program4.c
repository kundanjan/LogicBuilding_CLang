#include<stdio.h>

void Display(int iNo,int iFreq)
{
    int i = 0;
    if(iFreq < 0)
    {
        iFreq = -iFreq;
    }
    for(i = 0;i < iFreq; i++)
    {
        printf("%d ",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iFrequency = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    printf("Enter the Frequency : ");
    scanf("%d",&iFrequency);

    Display(iValue,iFrequency);
    
    return 0;
}