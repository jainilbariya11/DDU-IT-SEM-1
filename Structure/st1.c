#include<stdio.h>

struct student
{
    int id;
    int sub[3];
    char name[50];
    int total;
};

void main()
{
    struct student student[100];
    int i,j,N,k,flag=0,pos;
    printf("Enter number of students");
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        printf("Enter your id:-");

        scanf("%d",&student[i].id);
        printf("Enter your name:-");

        scanf("%s",student[i].name);
        printf("Enter the marks:-");
        student[i].total=0;
        for(j=0;j<3;j++)
        {
            k=scanf("%d",&student[i].sub[j]);
            student[i].total=student[i].total+student[i].sub[j];
        }
    }
    printf("Id\t Name\t Sub1\t Sub2\t Sub3\t Total Marks\n");
    for(i=0;i<N;i++)
    {
        printf("%d\t %s\t %d\t %d\t %d\t %d\n",student[i].id,student[i].name,student[i].sub[0],student[i].sub[1],student[i].sub[2],student[i].total);
    }
    int max;
    max=student[0].total;
    for(i=1;i<N;i++)
    {
        if(student[i].total>max)
        {
            max=student[i].total;
            pos=i;
        }
    }
    printf("Details of student with the highest marks:-\n");
    printf("%d\t %s\t %d\t %d\t %d\t %d\n",student[pos].id,student[pos].name,student[pos].sub[0],student[pos].sub[1],student[pos].sub[2],student[pos].total);
}