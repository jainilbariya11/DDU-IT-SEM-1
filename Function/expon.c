
#include<stdio.h>
                      
int expo(int a,int b); //function declartion 
                                                /* x y   x y
                                                    3^4=3*3^3
                                                    =3*3^2
                                                    =3*3^1
                                                        =3*3^0*/

void main()//main part
{
   int x,y,ans;
   printf("Enter the base : ");
   scanf("%d",&x);//3
      printf("Enter the exponent : ");
   scanf("%d",&y);//4
   ans=expo(x,y); 
   printf("Answer = %d\n",ans);
 }
 int expo(int x,int y) //function defination
 {
     if(y==0)    
     {
       return 1;
      }
    else
    {
      return(x*expo(x,y-1)); 
    }
  }

