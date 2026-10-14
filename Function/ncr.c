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
  int n,r,ncr;
  int m = n-r;
    printf("enter the value of  n: ");
    scanf("%d",&n);

    printf("enter the value of  r: ");
    scanf("%d",&r);
    m=n-r;
    //method-1
    // int nfact=factorial(n);
    // int rfact=factorial(r);
    // int mfact=factorial(m);
 
    // printf("nfact=%d\nrfact=%d\n mfact=%d\n",nfact,rfact,mfact);
    // ncr=nfact/(rfact*mfact);

    // also without declare nfact ,rfact .
    //method -2 
     ncr = factorial(n)/(factorial(r)*factorial(m));
    
     printf("\n --> ncr=%d",ncr);
    return 0;
}