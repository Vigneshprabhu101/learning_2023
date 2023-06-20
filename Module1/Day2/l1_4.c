/*
4. Write a program to find total number of bits set in a given array.
Say we have a array of 3 elements
a[3] = {0x1, 0xF4, 0x10001};
The total number of set bits in the given array is
1 bit in 0x01, 5 in 0xF4, 2 in 0x10001, so the total is 1 + 5 + 2 = 8 bits

Topics to be covered
- Arrays
- Loops
- Bitwise Operators
*/
#include <stdio.h>
int sumsetbits(int num) {
    int count = 0;
    while (num > 0) 
    {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
int main() {
    unsigned int arr[100] = {0};
    int n=0;
    printf("\n Enter the maximum element in number :");
    scanf("%d",&n);
    printf("\n Enter element\n");
    for(int i=0;i<n;i++)
    {
        scanf("%x",&arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += sumsetbits(arr[i]);
    }
    printf("Total number of set bits: %d\n", sum);
    return 0;
}

