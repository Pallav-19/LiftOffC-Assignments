#include <stdio.h>
int main()
{
    int arr[50], i, n, sum1, sum2;
    sum1=sum2=0;
    printf(" Enter the total no. of elements to be inserted:  \n");
    scanf("%d", &n);
    printf("Enter the elements :  \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements inserted are:  \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i]%2 == 0)
        {
           sum1=sum1+arr[i];
        }
        
    }
    printf("The elements at even positions are : \n");
    for ( i = 0; i < n; i++)
    {
        if (i%2==1)
        {
            printf("%d \n",arr[i]);
        }
    }
        printf("\n The value of sum of all the even elements is %d \n",sum1);

    
}