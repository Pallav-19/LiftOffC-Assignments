#include <stdio.h>
int main()
{
    int minimum, maximum, i, n, arr[20];
    printf("\n write the no. of elements to be compared\n  ");
    scanf("%d", &n);
    printf("\n write the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("the elements are :\n");
    for (i = 0; i < n; i++)
    {

        printf("%d\n ", arr[i]);
    }

    minimum = maximum = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < minimum)

            minimum = arr[i];

        if (arr[i] > maximum)

            maximum = arr[i];
    }

    printf(" The minimum value among all these elements provided is :  %d \n", minimum);
    printf(" The maximum value among all these elements provided is :  %d \n", maximum);
}
