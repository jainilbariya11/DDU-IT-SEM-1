#include<stdio.h>  
#include<string.h>
 void main()
 {
    char a[100],b;
    int i,j,k,flag=0;
    scanf("%s",a);
    j=strlen(a);
    for(i=0;i<j/2;i++)
    {
        if(a[i]!=a[j-i-1])
        {
         flag++;
        }
    }
    if(flag>0)
    printf("String is not a palindrome.");
 else
   printf("String is a palindrome");
 }