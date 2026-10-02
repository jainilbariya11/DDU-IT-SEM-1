#include<stdio.h>
#include<string.h>
 void main()
 {
    char a[100],b[100]; 
    int i,j,k;
  printf("Enter the string :\n");
    gets(a); 
    j=strlen(a); 
    k=j-1;
    for(i=0;i<j;i++) 
    {
        b[k]=a[i];
        k--;
    }
    printf("The reverse of the given string is %s.",b); // also use puts(b);
      }
