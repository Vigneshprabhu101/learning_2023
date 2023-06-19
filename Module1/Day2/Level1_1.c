/*
1. Write a program to print exponent part of double variable in hexadecimal and binary format.
lets say we have x = 0.7, the exponent in hex is 0x3FE and 0b01111111110
You may use the below link to validate you output
https://baseconvert.com/ieee-754-floating-point

Topics to be covered
- Pointers
- Bitwise Operators
*/

#include <stdio.h>
void forExpo(double num) {
    unsigned long long* ptr = (unsigned long long*)&num;
    unsigned long long e = (*ptr >> 52) & 0x7FF; 
    char b[12]; 
    int i;
    for (i = 10; i >= 0; i--) 
    {
    b[10 - i] = ((e >> i) & 1) + 48; 
    b[11] = '\0'; 
    }
    printf("Hexadecimal value is %llx\n",e);
    printf("Binary value is %s\n",b);
}
int main() {
    double num=0;
    printf("\nEnter the number : ");
    scanf("%lf",&num);
    forExpo(num);
    return 0;
}


