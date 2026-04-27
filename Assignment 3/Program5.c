/*
5. Accept on character from user and check whether that character is vowel  
(a,e,i,o,u) or not.  
Input : E   
Output : TRUE  
Input : d   
Output : FALSE
*/

#include<stdio.h>

typedef int BOOL;
#define FALSE 0
#define TRUE 1

BOOL isVowel(char ch)
{
    if(ch == 'a' || ch == 'A' ||ch == 'e' || ch == 'E' ||ch == 'i' || ch == 'I' ||ch == 'o' || ch == 'O' ||ch == 'u' || ch == 'U'){
        return TRUE;
    }
    return FALSE;
}

int main()
{
    char cValue = '\0';
    printf("Enter the character : ");
    scanf("%c",&cValue);
    if(isVowel(cValue) == TRUE)
    {
        printf("It is vowel\n");
    }
    else{
        printf("It is not vowel\n");
    }
    return 0;
}

