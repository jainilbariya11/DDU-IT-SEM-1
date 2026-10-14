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
  int n,r,npr;

    printf("enter the value of  n: ");
    scanf("%d",&n);

    printf("enter the value of  r: ");
    scanf("%d",&r);

     npr = factorial(n)/factorial(n-r);
    
     printf("\n --> npr=%d",npr);
    return 0;
}
