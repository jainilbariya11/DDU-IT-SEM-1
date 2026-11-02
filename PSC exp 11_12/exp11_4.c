/* 4) W.A.P that will find maximum number from the given 1-D array 
      by using the concept of function returning pointer. */

#include <stdio.h>

int* maxPtr(int *arr, int n)
{
    int *max = arr;
    for(int i = 1; i < n; i++)
    {
        if(*(arr + i) > *max)
            max = arr + i;
    }
    return max;
}

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int *m = maxPtr(arr, n);
    printf("Maximum number = %d\n", *m);

    return 0;
}
