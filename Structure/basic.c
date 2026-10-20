#include<stdio.h>
void main()
{
  struct student // structure declare
  {
    char name[20];
    int roll;
    float marks;
  };

  struct student s1; // variable declare

    printf("Enter name: ");
    scanf("%s", s1.name); // student s1 name

    printf("Enter roll number: ");  
    scanf("%d", &s1.roll); // student s1 roll number

    printf("Enter marks: ");  
    scanf("%f", &s1.marks); // student s1 marks

    printf("\nStudent Details:\n"); // student details print
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll);   
    printf("Marks: %.2f\n", s1.marks);
}
