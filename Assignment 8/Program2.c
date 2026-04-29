/*
2. Write a program which accept width & height of rectangle from user and calculate its area.

(Area = Width * Height)

Input : 5.3 9.78
Output : 51.834

*/

#include<stdio.h>

float AreaOfRectangle(float fwidth, float fheight)
{
    return (fwidth * fheight);
}

int main()
{   
    float width = 0, height = 0;

    printf("Enter the width : ");
    scanf("%f",&width);
    printf("Enter the height : ");
    scanf("%f",&height);

    printf("Area of Rectange : %.3f\n",AreaOfRectangle(width,height));

    return 0;
}