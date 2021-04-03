#include <stdio.h>
void square(int);
int main()
{
    int n;
    printf("Enter a number to be squared ");
    scanf("%d", &n);
    square(n);
}
void square(int m)
{
    int fact = 1;
    int i;
    for (i = 1; i <= 2; i++)
    {
        fact *= m;
    }
    printf("The square of the given number is : %d", fact);
}
