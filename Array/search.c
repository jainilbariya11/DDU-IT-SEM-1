#include<stdio.h>
int main()
{
  int i ,N,a[10];
  int b,match=0,pos=0;

  printf("enter number of elements: ");
 scanf("%d",&N); //you want array size.
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
 printf("Enter the number to search: "); 
 scanf("%d",&b);
printf("---------------------------------\n"); 

for(i=0;i<N;i++)
   {
    if(a[i]==b) //find number
    { 
        match++;
        pos=i;
         printf("a[%d] = %d\n", i, a[i]);
    }
   
   }

  if(match>0)
  {
      printf("--> Number %d is found at position as mention above for %d times.\n", b, match);
  }
  else
  {
      printf("Number %d is not found in the array.\n", b);
  }
  printf("---------------------------------\n");

  return 0;
}
