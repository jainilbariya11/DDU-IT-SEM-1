/* 2) Write integer numbers to a file. Read them back and find average of all numbers. */

#include <stdio.h>

int main()
{
    FILE *fp;
    int num, count = 0, sum = 0;

    fp = fopen("numbers.txt", "w");
    if(fp == NULL)
    {
        printf("Error opening file!");
        return 0;
    }

    printf("Enter numbers (Press 0 to stop):\n");
    while(1)
    {
        scanf("%d", &num);
        if(num == 0) break;
        fprintf(fp, "%d ", num);
    }
    fclose(fp);

    fp = fopen("numbers.txt", "r");
    if(fp == NULL)
    {
        printf("Error opening file!");
        return 0;
    }

    while(fscanf(fp, "%d", &num) == 1)
    {
        sum += num;
        count++;
    }

    fclose(fp);

    if(count > 0)
        printf("Average = %.2f\n", (float)sum / count);
    else
        printf("No numbers found in file!\n");

    return 0;
}
