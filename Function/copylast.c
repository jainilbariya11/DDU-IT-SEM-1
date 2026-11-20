#include<stdio.h>
#include<string.h>
void abc(char s1[],char s2[]);
  void main()
{
  char s1[20];
  char s2[20];
  printf("ENter the string s1 :\n");
  gets(s1);
    printf("ENter the string s2 :\n");
  gets(s2);
  abc(s1,s2);
}
void abc(char s1[],char s2[])//logic and ALSO function defination.
{
  int n,l,i,c;
  l=strlen(s1);
  printf("no of character: ");
  scanf("%d",&c);
  n=strlen(s2)-c;
  for(i=n;s2[i]!='\0';i++)
  {
    s1[l]=s2[i];
    l++;
  }
  s1[l]='\0';
  printf("--> string=%s",s1);
}