#include<stdio.h>
//function declaration and defination.
  float sum(float a,float b)
    {
        return a+b;
    }
    float sub(float a,float b)
    {
        return a-b;
    }
    float pro(float a,float b)
    {
        return a*b;
    }
    float div(float a,float b)
    {
        return a/b;
    }

int main()
{  float a,b,result;
    char opp;
    printf("Enter the 1st number a: ");
    scanf("%f",&a);

    printf("Enter the 2nd number b: ");
    scanf("%f",&b);
  
    printf("\n Addition --> + \n Subtraction --> - \n Multiplication --> * \n Division --> / \n"); //sign declare
    printf("\nEnter your operator according above list  : \n");
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &opp);


    if(opp== '+')
    {
     result=sum(a,b); //function call.
    printf("\n--> Sum = %.2f\n\n",result);
    }

     else if(opp== '-')
    {
      result=sub(a,b);  //function call.
        printf("\n--> Sub = %.2f\n\n",result);
    }

      else if(opp== '*')
    {
    result=pro(a,b);  //function call.
      printf("\n--> Product = %.2f\n\n",result);
    }
    
      else if(opp== '/')
     {
          if(b!=0)
         {
           result=div(a,b);  //function call.
           printf("\n--> Division = %.2f\n\n",result);
         }
          else
         {
           printf("\nCannot divide by zero");
         }
     }
  
    else
    {
        printf("\nInvalid operator choose!");
    }

    return 0;

}
