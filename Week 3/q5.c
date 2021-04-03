#include<stdio.h>
int pal(int);
int main()
{
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum = pal(n);
    if(n==sum)
         printf("The number is palindrome number");
    else
    printf("The given number is not palindrome number");
    return 0;
}
int pal(int num){
    int rem;
static int sum=0;
    if(num!=0){
         rem=num%10;
         sum=sum*10+rem;
         pal(num/10);
    }
    return(sum);
}