//Find sum of even and odd indexed element
#include <stdio.h>
void sumOE(int *arr,int n,int *sumEven,int *sumOdd) 
{
    *sumEven = 0;
    *sumOdd = 0;
    for (int i = 0; i < n; i++) 
    {
        if (i%2== 0) 
        {
            *sumEven+= arr[i];
        } 
        else 
        {
            *sumOdd+= arr[i];
        }
    }
}
int main() {
   printf("\n Enter the number of elements in array:\t");
    int n = 0;
    scanf("%d", &n);
    int arr[100] = {0};
    printf("\nEnter the elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }    
    int sumEven,sumOdd;
    sumOE(arr,n,&sumEven,&sumOdd);
    printf("\nSum of even-indexed elements: %d\n", sumEven);
    printf("Sum of odd-indexed elements: %d\n", sumOdd);
    return 0;
}
