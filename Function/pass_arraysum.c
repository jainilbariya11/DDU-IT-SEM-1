#include<stdio.h>

void add(int [],int [],int [],int n); //function decalration
				
void main()
{
  int a[20],b[20],c[20];
  int n,i;
  printf("enter the size of array: ");
  scanf("%d",&n); //10
    printf("enter the array of a: \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
   }
    printf("enter the array of b: \n");
 for(i=0;i<n;i++)
  {
    scanf("%d",&b[i]);
   }
  add(a,b,c,n);
   printf("the array of c: \n");
  for(i=0;i<n;i++)
  {
    printf("--> %d\n",c[i]);
   }
}
 void add(int p[],int q[],int r[],int n)    // function defination
 {                           
    int i;            
    for(i=0;i<n;i++)         
    {
      r[i]=p[i]+q[i];
     }
  }