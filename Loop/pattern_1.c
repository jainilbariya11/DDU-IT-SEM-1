// number pattern using for loop //

#include<stdio.h>
void main()
{
  int i,j,n;
  printf("Enter the number of rows : ");
  scanf("%d",&n);

  for(i=1;i<=n;i++)//printing rows
  {
    for(j=1;j<=i;j++)//printing columns
    {
      printf("%d",j);//printing numbers
    }
    printf("\n");//new line after each row
  }
}