#include<stdio.h>

union age
{
    char name[20];
    struct a
    {
        int year;
        int month;
        int date;
    }a;
};

void main()
{
    union age a[2];
    int i;
    for(i=0;i<2;i++)
    {
        scanf("%s",a[i].name);
        printf("\n%s\n",a[i].name);
        printf("Enter your birthday in dd/mm/yy\n");
        scanf("%d/%d/%d",&a[i].a.date,&a[i].a.month,&a[i].a.year);
        if(a[i].a.year>=2008)
        {
            printf("\n%d/%d/%d",a[i].a.date,a[i].a.month,a[i].a.year);
        }
        else
        {
            printf("\nadult");
        }
    }
}   