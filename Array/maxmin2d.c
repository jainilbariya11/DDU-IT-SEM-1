#include<stdio.h>
int main()
{

    int a[50][50];//declaring 2D array
    int i,j,r,c;
 
   int max=a[0][0];
   int min=a[0][0];


printf("enter the value of r : ");
scanf("%d",&r);
printf("enter the value of c : ");
scanf("%d",&c);

for(i=0;i<r;i++)//entering the values of 2D array a
{
    for(j=0;j<c;j++)
    {
        printf("enter the value of a[%d][%d] : ",i,j);
        scanf("%d",&a[i][j]);
    }
}




printf("the 2D array a is : \n");//printing the values of 2D array a
for(i=0;i<r;i++)
 {
    for(j=0;j<c;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
}


printf("find out max and min from  2D array elements is perform: \n");//finding the maximum and minimum values from 2D array elements
min=a[0][0];
for(i=0;i<r;i++)
 {
    for(j=0;j<c;j++)
    {
        if(a[i][j]>max)
        {
            max=a[i][j];
           
        }  

        if(a[i][j]<min)
        {
            min=a[i][j];
           
        }
    }

  }

  
    printf("the max of 2D array elements is : %d\n ",max);
  printf("the min of 2D array elements is : %d",min);

    return 0;
}