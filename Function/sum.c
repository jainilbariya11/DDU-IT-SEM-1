#include<stdio.h>


int add(int x,int y)//function calling //step 3 
{
  int sum;
  sum= x+y;

  return sum ; // step 4
   
}
 
int main() //step 1
{
    int a,b;
    printf("enter the 1st number a: ");
    scanf("%d",&a);

    printf("enter the 2nd number b: ");
    scanf("%d",&b);

    int sum = add(a,b);// function called  // this is step 2 then go above

      printf("sum=%d",sum); // step 5 


    return 0;
}