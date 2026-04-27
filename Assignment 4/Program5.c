/* 
5. Write a program which accept number from user and return difference between
summation of all its factors and non factors. 
                                                     
Input :  
12 
Output : -34  
Input :  
(16 - 50)  
10  
Output : -29 (8 - 37)  
*/

#include<stdio.h> 

int FactDiff(int iNo) 
{ 
    int iNonFact = 0,iFact = 0;

    for(int i = 1;i < iNo;i++)
    {
        if(iNo % i == 0)
        {
            iFact = iFact + i;
        }
        else{
            iNonFact = iNonFact + i;
        }
    }

    return (iNonFact - iFact);
} 
int main() 
{ 
    int iValue = 0; 
    int iRet = 0; 
    printf("Enter number"); 
    scanf("%d",&iValue); 
    iRet  = FactDiff(iValue); 
    printf("%d",iRet); 
    return 0; 
} 