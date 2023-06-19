// Write a program to print the grade of the given student using if else if block
//      90 to 100 -> "Grade A"
//      75 to 89 -> "Grade B"
//      60 to 74 -> "Grade C"
//      50 to 59 -> "Grade D"
//      0 to 49 -> "Grade F"
#include<stdio.h>
#include<stdlib.h>
char grade(int *m)
{
    char G;
    if(*m>=90 && *m<100)
        G= 'A';

    else if(*m>=75 && *m<89)
        G= 'B';

    else if(*m>=60 && *m<74)
        G= 'C';

    else if(*m>=50 && *m<59)
        G= 'D';

    else if(*m>=0 && *m<49)
        G= 'F';

    else
    {
        printf("invalid entry");
        exit(0);
    }
    return G;
    
}
int main()
{
    int mark=00;
    printf("Enter the mark : ");
    scanf("%d",&mark);
    printf("Grade %c",grade(&mark));
    return 0;
}