/*
4. Accept one character from user and convert case of that character.  
Input : a   
Output : A  

Input : D   
Output : d  

*/

#include<stdio.h>

void DisplayConvert(char CValue)
{
    
    if((int)CValue >=65 && (int)CValue <= 91)
    {
        printf("%c\n", CValue + 32);
    }
    else if((int)CValue >=97 && (int)CValue <= 123)
    {
        printf("%c\n", CValue - 32);
    }
    
}

int main()
{
    char cVal = '\0';
    printf("enter the character : ");
    scanf("%c",&cVal);

    DisplayConvert(cVal);
    return 0;
}