   #include<stdio.h>

void sort(int ms[],int n); 
				
void main()
{
  int ab[20],i,n;
printf("Enter The size of Array : ");
  scanf("%d",&n);
  printf("Enter The Array : \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&ab[i]);
   }
  sort(ab,n);
    printf("The Array after sorting: \n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",ab[i]);
   }
}
 void sort(int a[],int n)    
 {                           
    int i,j,temp;            
    for(i=0;i<n-1;i++)         
    {
      for(j=i+1;j<n;j++)
      {
	    if(a[i]>a[j])
	    {
	       temp=a[j];
	       a[j]=a[i];
	       a[i]=temp;
	    }
       }
     }
  }