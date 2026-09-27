#include<stdio.h>
int main()
{
  int i ,j,N,a[50];
  int b,count=0,pos;

  printf("enter number of elements: ");//you want array size
 scanf("%d",&N); 
printf("---------------------------------\n"); 
     printf("enter the array:\n"); //you want array elements
  for(i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("---------------------------------\n"); 
  printf("your array is:\n"); //print the array elements
   for(i=0;i<N;i++)
  {
    
    printf("%d\n",a[i]);
  }
printf("---------------------------------\n"); 

 printf("Enter the number to delet from array: ");//you want to delete number from array
  scanf("%d",&b);
printf("---------------------------------\n"); 
for(i=0;i<N;i++)//loop for checking the number in array
{
    if(a[i]==b)
  {  count++;
    pos=i;
  
    for(j=i;j<N;j++)
    {
    a[j]=a[j+1];
    
    }
  printf(" index a[%d]= %d.",pos,b);
   i--; 
   break;
 }  
}
  


if(count==0)//if number is not available in array
  { 
    printf("Number is not avilable in array !");
    
  }

printf("\n---------------------------------\n"); 
printf("new array after deletion is:\n");

 for(i=0;i<N-count;i++)//print the new array after deletion
  {
    
    printf("%d\n",a[i]);
  }
printf("---------------------------------\n"); //decorative line
return 0;
}

//The given program is for deleting first occurrence, to remove all occurences just remove break; from the loop.//
