#include <stdio.h>
int mat(int a[][10],int r,int c);
int main() 
{

    int a[10][10];
    int i,j,r,c;
    int ans;
    printf("enter the no of rows :  ");
    scanf("%d",&r);
     printf("enter the no of column :  ");
    scanf("%d",&c);
     printf("enter the array of a:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Your Matrix is :\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
          printf("\n");
    }
    ans=mat(a,r,c);
    printf("--> ANSWER = %d\n",ans);
    return 0;
}
int mat(int a[][10],int r,int c)
{
    int sum=0,i,j;
    for(i=0;i<r;i++)//also we are instead of r we write 3 and same in c (column) but we make program like dynamic.
    {
        for(j=0;j<c;j++)//same as above
        {
            sum=sum+a[i][j];
         }
    }     
    return sum;
}    