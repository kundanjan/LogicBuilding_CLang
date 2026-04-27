#include <stdio.h>
void Display()
{
    int n = 5;
    while (n > 0)
    {
        printf(" %d", n);
        n--;
    }
}
int main()
{
    Display();
    return 0;
}