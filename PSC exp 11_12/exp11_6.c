/* 6) WAP to store data for n number of student 
      (student name, id and percentage) and display the detail 
      of a student who got the highest percentage. 
      Implement using pointers and structures. */

#include <stdio.h>

struct student {
    char name[30];
    int id;
    float per;
};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student s[n];
    struct student *ptr = s;
    int maxIndex = 0;

    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &(ptr + i)->id);

        printf("Name: ");
        scanf("%s", (ptr + i)->name);

        printf("Percentage: ");
        scanf("%f", &(ptr + i)->per);

        if((ptr + i)->per > (ptr + maxIndex)->per)
            maxIndex = i;
    }

    printf("\nStudent with Highest Percentage:\n");
    printf("Name: %s\n", (ptr + maxIndex)->name);
    printf("ID: %d\n", (ptr + maxIndex)->id);
    printf("Percentage: %.2f\n", (ptr + maxIndex)->per);

    return 0;
}
