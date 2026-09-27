#include<stdio.h>
int main()
{
  int i ,N,a[10];
  int max,min,temp;
  int pos1=0,pos2=0;

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

max=a[0];
min=a[0];
for(i=1;i<N;i++)
{
  
    if(a[i]>max)
  {
    max=a[i];
    pos1=i;
    
  }

   if(a[i]<min)
   {
    min=a[i];
    pos2=i;
   }
}
printf("Maximum element in the array is: %d\n",max);// print max
printf("position of maximum element : a[%d]\n ",pos1);
printf("---------------------------------\n");


printf("Maximum element in the array is: %d\n",min);// print min
printf("position of maximum element : a[%d]\n",pos2);
printf("---------------------------------\n");


temp=a[pos1]; // swap the max and min values.
a[pos1]=a[pos2];
a[pos2]=temp;

printf("---------------------------------\n"); 
  printf("your array after the swap max and min:\n"); 
   for(i=0;i<N;i++)
  {
    
    printf("%d\n",a[i]);
  }
printf("---------------------------------\n");





return 0;
}