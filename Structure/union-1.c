#include<stdio.h>
union book
{
  int isbn;
  char title[20];
  float price;
}b[2];
void main()
{
  union book b[2];
  int i;
  for(i=0;i<2;i++)
  {
  scanf("%d",&b[i].isbn);
  printf("%d\n",b[i].isbn);
  scanf("%s",b[i].title);
  printf("%s\n",b[i].title);
  scanf("%f",&b[i].price);
  printf("%f\n",b[i].price);
  }
  }