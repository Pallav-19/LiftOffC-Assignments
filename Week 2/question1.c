#include<stdio.h>
    int main(){
        int num,sum;
        sum=0;
        printf("write down a number : ");
        scanf("%d",&num);
        while(num>0)
        {
            sum = sum + num%10;
            num=num/10;
        }
        printf("the sum of the digits of the given number is : %d ",sum);

    }
