/*
5. Write a program to find both smallest and largest digits in given n numbers
For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5
*/
#include <stdio.h>
void search(int n)
{
    int num, smallest = 9, largest = 0;
    int digit;
    while (n > 0)
    {
        printf("Enter number: ");
        scanf("%d", &num);
        if (num > 10)
        {
            while (num != 0)
            {
                digit = num % 10;
                if (digit < smallest)
                {
                    smallest = digit;
                }
                if (digit > largest)
                {
                    largest = digit;
                }
                num /= 10;
            }
            printf("Smallest Digit: %d\n", smallest);
            printf("Largest Digit: %d\n", largest);
            smallest = 9;
            largest = 0;
        }
        else
        {
            printf("Not Valid\n");
        }
        n--;
    }
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    search(n);
    return 0;
}

