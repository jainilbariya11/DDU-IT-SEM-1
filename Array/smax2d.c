#include<stdio.h>
int main()
{

    int a[50][50];//declaring 2D array
    
 int b[10];
      int sum=0;
    int i,j,r,c;
 int smax=0,posr,posc;


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

for(i=0;i<r;i++)//excuting the sum of 2D array row  
 {
  sum=0;
    for(j=0;j<c;j++)
    {
        sum=sum+a[i][j];
    }
   b[i]=sum;
  printf("the sum of 2D array elements of row b[%d]=%d\n",i,b[i]);
  }
  for(i=0;i<r;i++)//finding the maximum sum of 2D array row
  {
      if(b[i]>smax)
      {
          smax=b[i];
          posr=i;
      }
    }
    printf("the maximum sum of 2D array elements of row b[%d]=%d\n",posr,smax);
  
  for(j=0;j<c;j++)//excuting the sum of 2D array column 
 {
     sum=0;  
    for(i=0;i<r;i++)
    {
        sum=sum+a[i][j];
    }

b[j]=sum;

  printf("the sum of 2D array elements of column b[%d]=%d\n",j,b[j]);
 }

 
 for(j=0;j<c;j++)//finding the maximum sum of 2D array column
  {
      if(b[j]>smax)
      {
          smax=b[j];
          posc=j;
      }
    }
printf("the maximum sum of 2D array elements of column b[%d]=%d\n",posc,smax);
    return 0;
}