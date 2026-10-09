#include<stdio.h>
int main(){
  void india();// Function prototype for india
  india(); 
    return 0;
}

void england()
{
    printf("hello england\n");
    return;
}

void india() 
{
    printf("hello india\n");
    void australia();//function prototype for australia
    australia();
    return;
}

void australia()
{
    printf("hello australia\n");
    void england();//function prototype for england
    england();
    return;
}