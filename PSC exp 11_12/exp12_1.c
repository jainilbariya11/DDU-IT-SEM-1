/* 1) Read input characters from user and write it to file.
      After that read the content of the same file and display on screen. */

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("data.txt", "w");

    if(fp == NULL)
    {
        printf("Error opening file!");
        return 0;
    }

    printf("Enter text (Press # to stop):\n");

    while((ch = getchar()) != '#')
    {
        fputc(ch, fp);
    }

    fclose(fp);

    fp = fopen("data.txt", "r");
    printf("\nContent of file:\n");

    while((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
