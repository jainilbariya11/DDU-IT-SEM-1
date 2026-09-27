#include<stdio.h>

void main()
{
int a[10],i,N,b[10];

printf("enter number of elements: ");
scanf("%d",&N);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
 
// Method -1.
  
printf("your reverse  array is:\n");
 for(i=N-1;i>=0;i--)
 
  {
    printf("%d\n",a[i]);
  }
 

 // Method -2.

/*for(i=0;i<N;i++)   //new array declare for reverse data print let b[i]                                                            
{
 
 b[i]=a[N-i-1]; 
}
 //then print array

 printf("your reverse  array is:\n");
 for(i=0;i<N;i++)
  {
     printf("%d\n",b[i]);
   }
*/
 }       
