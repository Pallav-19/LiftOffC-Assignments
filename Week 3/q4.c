#include<stdio.h>
long int x(int n);
int main() {
    int n;
    printf("Enter nubmer: ");
    scanf("%d",&n);
    printf("Factorial = %ld",x(n));
    return 0;
}

long int x(int n) {
    if (n>=1)
        return n*x(n-1);
    else
        return 1;
}