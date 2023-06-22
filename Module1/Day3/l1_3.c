/* 
4. Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986

Concepts to be used.
- Loops
- Operators
*/

#include <stdio.h>

int largestNum(int num) 
{
    int maxNum = 0;
    int divisor = 1;
    for (int i = 0; i < 4; i++) 
    {
        int tempNum = (num / (divisor * 10)) * divisor + (num % divisor);
        if (tempNum > maxNum) 
        {
            maxNum = tempNum;
        }else
        {
            printf("Not Valid\n");
        } 
        divisor *= 10;
    }

    return maxNum;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    printf("Largest number after deleting a digit: %d\n", largestNum(num));
    return 0;
}
