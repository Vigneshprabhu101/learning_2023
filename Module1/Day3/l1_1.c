/*
1. Patern Generator:
Write a program to print the given pattern below using 3 functions (1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 3rd to accept the n and print from n to 1)
1234554321
1234    4321
123        321
12            21
1                1

Concepts to be used.
- Loops
*/
#include <stdio.h>
void fromN21(int n);
void from12N(int n);
void spaces(int n);
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) 
    {
        from12N(i);
        if (i >= 1) 
        {
            spaces(2 * (n - i));
            fromN21(i);
        }
        printf("\n");
    }
    return 0;
}

void fromN21(int n) 
{
    int i;
    for (i = n; i >= 1; i--) 
    {
        printf("%d", i);
    }
}
void from12N(int n) 
{
    int i;
    for (i = 1; i <= n; i++) 
    {
        printf("%d", i);
    }
}

void spaces(int n) 
{
    int i;
    for (i = 1; i <= n; i++) 
    {
        printf(" ");
    }
}
