/* 
2. Prints Bits:
Scan a 32bit integer and prints its bits.

Concepts to be used.
- Loops
- Bitwise Operators
*/
#include <stdio.h>
unsigned int bitCount(unsigned int num) 
{
    unsigned int b =0;
    for (int i = 31; i >= 0; i--) 
    {
        b += (num >> i) & 1;
    }
    return b;
}
int main() 
{
    unsigned num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);
    printf("total 1's bit are : %u\n ", bitCount(num));
    return 0;
}

