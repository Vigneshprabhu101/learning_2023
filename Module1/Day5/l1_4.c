/*
4. write a program to Store Data for n students in Structures Dynamically. 
*/
#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[100];
    char reg[10];
    float gpa;
};
void detail(int n)
{
    struct Student *s=(struct Student*)malloc(n*sizeof(struct Student));
    for (int i=0;i<n;i++) 
    {
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter register number: ");
        scanf("%s",s[i].reg);
        printf("Enter marks: ");
        scanf("%f",&s[i].gpa);
    }
    printf("\nEntered  Data is :\n");
    for (int i=0;i<n;i++) 
    {
        printf("Student %d:\n",i+1);
        printf("Name: %s\n",s[i].name);
        printf("Register number: %s\n",s[i].reg);
        printf("GPA: %.2f\n",s[i].gpa);
        printf("\n");
    }

    free(s);
}
int main() 
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    detail(n);
    return 0;
}
