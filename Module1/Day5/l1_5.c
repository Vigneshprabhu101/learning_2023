/*
5. Write a program to demonstrate the swapping the fields of two structures using pointers

*/
#include <stdio.h>
#include<string.h>
struct Structure 
{
    char str[100];
    int num1;
    float num2;
};
void swap(struct Structure *s1, struct Structure *s2) 
{
    char tempStr[100];
    strcpy(tempStr, s1->str);
    strcpy(s1->str, s2->str);
    strcpy(s2->str, tempStr);
    int tempnum1 = s1->num1;
    s1->num1 = s2->num1;
    s2->num1 = tempnum1;
    float tempnum2 = s1->num2;
    s1->num2 = s2->num2;
    s2->num2 = tempnum2;
}
void read(struct Structure *s)
{
    printf("\nEnter string\n:");
    scanf("%s",s->str);
    printf("\nIteger\n:");
    scanf("%d",&s->num1);
    printf("\nFloat\n:");
    scanf("%f",&s->num2);
} 
int main() 
{
    struct Structure s1,s2;
    printf("\n Enter structure 1 member data : \n");
    read(&s1);
    printf("\n Enter structure2 member data : \n");
    read(&s2);
    swap(&s1, &s2);
    printf("\nResult after swapping is \n");
    printf("Structure 1 : String = %s, Int = %d, Float = %.2f\n",s1.str,s1.num1,s1.num2);
    printf("Structure 2 : String = %s, Int = %d, Float = %.2f\n",s2.str,s2.num1,s2.num2);
    return 0;
}
