/* 2) Write a function mystrcat(s,t) which copies string t to the end of the string s. */

#include <stdio.h>

void mystrcat(char *s, char *t)
{
    while(*s != '\0')
        s++;

    while(*t != '\0')
    {
        *s = *t;
        s++;
        t++;
    }
    *s = '\0';
}

int main()
{
    char s[100], t[50];

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    mystrcat(s, t);

    printf("Concatenated string = %s\n", s);

    return 0;
}
