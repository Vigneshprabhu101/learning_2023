/*
3. Write a function to display all members in the above array of structures
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct Student
{
    int rollno;
    char name[20];
    float marks;
};
void display(struct Student *s)
{
    printf("\nStudent details:\n");
    for (int i=0;i<3;i++)
    {
        printf("\nRoll No: %d\n",s[i].rollno);
        printf("Name: %s\n",s[i].name);
        printf("Marks: %.2f\n",s[i].marks);
    }  
}
int main()
{
    struct Student s[3];
    s[0].marks=90.00;
    strcpy(s[0].name,"Vignesh1");
    s[0].rollno=12;
    s[1].marks=80.00;

    strcpy(s[1].name,"Vignesh2");
    s[1].rollno=13;
    s[2].marks=70.00;
    strcpy(s[2].name,"Vignesh3");
    s[2].rollno=14;
    display(s);
    return 0;
}
