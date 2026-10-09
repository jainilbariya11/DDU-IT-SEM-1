#include<stdio.h>

int factorial(int x)
{
  int fact=1,k; 
  for(k=2;k<=x;k++)
  {
    fact=fact*k;
  }
  return fact; 
}

int combination(int n,int r)
{
     int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
 
int main() 
{
  int i,j,n,space;
  printf("enter the number : ");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
     for(space=0;space<=n-i;space++)
     {
         printf(" ");
     }
    for(j=0;j<=i;j++)
    {
         int icj=combination(i,j);
      printf("%d ",icj);
    }
    printf("\n");
  }
  return 0;

}

