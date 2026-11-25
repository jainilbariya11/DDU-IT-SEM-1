 #include<stdio.h>
 int main()
 {
   int a[3][3],b[3][3],c[3][3],i;
   int *p1=a,*p2=b,*p3=c;
   
   printf("Enter the  array of a :\n");
   for(i=0;i<9;i++)
   {
    scanf("%d",p1+i);
    }
    
    printf("Enter the  array of b :\n");
   for(i=0;i<9;i++)
   {
    scanf("%d",p2+i);
    }
    
    printf(" the  array of a :\n");
   for(i=0;i<9;i++)
   {
    printf("%d ",*(p1+i));
      if((i+1)%3==0)
      printf("\n");
     }
    
 printf(" the  array of b :\n");
   for(i=0;i<9;i++)
   {
    printf("%d ",*(p2+i));
      if((i+1)%3==0)
      printf("\n");
     }
   
   for(i=0;i<9;i++)
   {
   *(p3+i)=*(p2+i)+*(p1+i);
   }
       
 printf(" the  addition  of two matrix is  :\n");
   for(i=0;i<9;i++)
   {
    printf("%d ",*(p3+i));
      if((i+1)%3==0)
      printf("\n");
     }
   
   }
