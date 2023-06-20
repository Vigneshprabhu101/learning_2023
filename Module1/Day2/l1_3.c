/*
3. Write a program to sum every alternate elements of a given array starting for element 0
For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be 10 + 30 + 50 = 90

Topics to be covered
- Arrays
- Loops
- Basic Operators
*/
#include <stdio.h>
int main() {
    int arr[100] = {0};
    printf("Enter the number of inputs :");
    int num=0;
    scanf("%d",&num);
    printf("Enter the array data");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for (int i = 0; i < num; i+=2) {
        sum += arr[i];
    }
    printf("Sum of alternate elements: %d\n", sum);
    return 0;
}
