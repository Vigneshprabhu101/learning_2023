/*
5. Write a function to perform a search operation on the array of structures based on name of the student
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int S2i(const char* str)
{
    int result = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return result;
}
float S2f(const char* str)
{
    float result = 0.00;
    int i = 0;
    while (str[i] != '\0' && str[i] != '.')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    if (str[i] == '.')
    {
        float f = 0.1;
        i++;
        while (str[i] != '\0')
        {
            result = result + (str[i] - '0') * f;
            f /= 10.0;
            i++;
        }
    }
    return result;
}
struct Student
{
    int rollno;
    char name[20];
    float marks;
};
void autoFill(const char* str, struct Student* s)
{
    int i = 0;
    char temp[20];
    int j = 0;
    while (str[i] != ' ' && str[i] != '\0')
    {
        temp[j++] = str[i++];
    }
    temp[j] = '\0';
    s->rollno = S2i(temp);

    if (str[i] == ' ')
        i++;

    j = 0;
    while (str[i] != ' ' && str[i] != '\0')
    {
        s->name[j++] = str[i++];
    }
    s->name[j] = '\0';

    if (str[i] == ' ')
        i++;

    j = 0;
    while (str[i] != ' ' && str[i] != '\0')
    {
        temp[j++] = str[i++];
    }
    temp[j] = '\0';
    s->marks = S2f(temp);
}
int search(const struct Student* s, int n, const char* name)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(s[i].name, name) == 0)   
        return 0;
    }
    return -1;   
}
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar();
    char data[100];
    struct Student* s = (struct Student*)malloc(n * sizeof(struct Student));
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the data:\n");
        fgets(data, sizeof(data), stdin);
        autoFill(data, &s[i]);
    }
    printf("\nStudent details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nRoll No: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }
    char searchName[20];
    printf("\nEnter the name to search: ");
    scanf("%s",searchName);
    int index = search(s, n, searchName);
    if (index != -1)
    {
        printf("Roll No: %d\n", s[index].rollno);
        printf("Name: %s\n", s[index].name);
        printf("Marks: %.2f\n", s[index].marks);
    }
    else
    {
        printf("\nStudent not found in list.\n");
    }
    free(s);
    return 0;
}
