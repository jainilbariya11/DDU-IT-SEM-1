/* 5) WAP to check the given nxn matrix is symmetric or not using pointer. */

#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter size of matrix (n): ");
    scanf("%d", &n);

    int a[n][n];
    int *p = &a[0][0];
    int symmetric = 1;

    printf("Enter elements of matrix:\n");
    for(i = 0; i < n * n; i++)
        scanf("%d", p + i);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(*(p + i*n + j) != *(p + j*n + i))
            {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric)
        printf("Matrix is Symmetric\n");
    else
        printf("Matrix is NOT Symmetric\n");

    return 0;
}
