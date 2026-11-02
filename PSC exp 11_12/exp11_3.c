/* 3) Addition of two 3X3 matrices using pointers. */

#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int *p = &a[0][0];
    int *q = &b[0][0];
    int *r = &c[0][0];
    int i;

    printf("Enter first 3x3 matrix:\n");
    for(i = 0; i < 9; i++)
        scanf("%d", p + i);

    printf("Enter second 3x3 matrix:\n");
    for(i = 0; i < 9; i++)
        scanf("%d", q + i);

    for(i = 0; i < 9; i++)
        *(r + i) = *(p + i) + *(q + i);

    printf("Result matrix:\n");
    for(i = 0; i < 9; i++)
    {
        printf("%d ", *(r + i));
        if((i + 1) % 3 == 0) printf("\n");
    }

    return 0;
}
