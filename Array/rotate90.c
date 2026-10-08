
#include<stdio.h>
int main()
{

    int a[50][50];//declaring 2D array
    int i,j,r,c;
printf("enter the value of row  r  : ");
scanf("%d",&r);
printf("enter the value of column c : ");
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


printf("the transpose of 2D array a is : \n");//printing the values of 2D array a

for(j=0;j<c;j++)
{
    for(i=0;i<r;i++)
    {
        
        printf("%d ",a[i][j]);
    }
    printf("\n");
}

printf("the 2D array a after rotating by 90 degree is : \n");//printing the values of 2D array a after rotating by 90 degree
for(j=0;j<c;j++)
{
    for(i=0;i<r;i++)
    {
        
        printf("%d ",a[r-1-i][j]);//here column  is change.
    }
    printf("\n");
}
    return 0;
}