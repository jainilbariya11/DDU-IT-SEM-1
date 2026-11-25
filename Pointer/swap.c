#include<stdio.h>
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main()
{ 
 int a,b;
 int *p=&a;
 int *q=&b;
 printf("Enter the value of a : ");
 scanf("%d",&a);
  printf("Enter the value of b : ");
 scanf("%d",&b);
 printf("The value of a and b before swap is a=%d | b=%d\n",a,b);
 swap(&a,&b);
  printf("The value of a and b after swap is a=%d | b=%d\n",a,b);
 }

