 #include<stdio.h>
 void main()
 {
  int a[10][10];
  int *p=&a;
  int symmetric =1,i,j,n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
   printf("Enter the  array of a :\n");
   for(i=0;i<n*n;i++)
   {
    scanf("%d",p+i);
    }
  
   printf(" the  matrix is:\n");
   for(i=0;i<n*n;i++)
   {
    printf("%d ",*(p+i));
      if((i+1)%n==0)
      printf("\n");
     }
     
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
        { 
          if(*(p+n*i+j)!=*(p+n*j+i))
          { 
           symmetric=0;
        goto abc;
          }
        }
     }
     abc:
     if(symmetric==1)
     printf("---> The Matrix is Symmetric.\n");
     else
       printf("---> The Matrix is not Symmetric.\n");                                    
}       
