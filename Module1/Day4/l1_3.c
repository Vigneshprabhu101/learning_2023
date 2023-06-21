// Reverse array
#include <stdio.h>
void reverse(int *arr, int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    printf("\n Enter the number of elements in array:\t");
    int n = 0;
    scanf("%d", &n);
    int arr[100] = {0};
    printf("\nEnter the elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(arr, n);
    printf("\nReversed array is:\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
