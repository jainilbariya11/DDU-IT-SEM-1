#include<stdio.h>
int main()
{
  int i ,j,N,a[10];
  int b,pos,temp;

  printf("enter number of elements: ");
 scanf("%d",&N); 
printf("---------------------------------\n"); 
     printf("enter the array:\n");
  for(i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("---------------------------------\n"); 
  printf("your array is:\n"); 
   for(i=0;i<N;i++)
  {
    
    printf("%d\n",a[i]);
  }
printf("---------------------------------\n"); 

for(i=0;i<N-1;i++)
{
    for(j=i+1;j<N;j++)
   {
    if(a[i]>a[j])//ascending order
                // if(a[i]<a[j]) desending order. --->  This method is called bubble sort.
    {
                
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
    }
   }
 }

printf("\n---------------------------------\n"); 
printf("new array after short is:\n");

 for(i=0;i<N;i++)
  {
    
    printf("%d\n",a[i]);
  }
printf("---------------------------------\n"); 
return 0;
}
