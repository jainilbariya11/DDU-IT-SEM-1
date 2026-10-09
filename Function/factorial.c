#include<stdio.h>

int factorial(int x)
{
  int fact=1,i; 
  for(i=2;i<=x;i++)
  {
    fact=fact*i;
  }
  return fact; 
}

int main()
{
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    factorial(a);
    printf("factorial of %d is %d",a,factorial(a));
    return 0;
}