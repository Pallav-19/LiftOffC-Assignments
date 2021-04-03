#include <stdio.h>
void factorial(int);
int main()
{
    int n;
    printf("Enter a number to calculate its Factorial:  ");
    scanf("%d", &n);
    factorial(n);
}
void factorial(int m)
{
    int fact = 1;
    int i;
    for (i = 1; i <= m; i++)
    {
        fact *= i;
    }
    printf("The factorial of the given number is : %d", fact);
}
