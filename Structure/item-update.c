#include<stdio.h>

struct item
{

    int id;
    char name[50];
    int price;
};
void main()
{
    struct item item[100];
    int i,N,flag=0,l;
    printf("Enter number of items:-");
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        printf("Enter item's id:-");
        scanf("%d",&item[i].id);

        printf("Enter item name:-");
        scanf("%s",item[i].name);

        printf("Enter item price:-");
        scanf("%d",&item[i].price);
    }

    printf("List:-\n");
        printf("Id\t Name\t price\n");
        for(i=0;i<N;i++)
        {

            printf("%d\t %s\t %d\n",item[i].id,item[i].name,item[i].price);
        }


    printf("Enter id for update:-");
    scanf("%d",&l);
    printf("Enter new name :-");
    scanf("%s",item[l].name);
    printf("Enter new price-");
    scanf("%d",&item[l].price);

    for(i=0;i<N;i++)
    {
        if(l==item[i].id)
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        printf("Id not found!\n");
    }

    else
    {
        printf("Updated list:-\n");
        printf("Id\t Name\t price\n");
        for(i=0;i<N;i++)
        {

            printf("%d\t %s\t %d\n",item[i].id,item[i].name,item[i].price);
        }
    }
}
