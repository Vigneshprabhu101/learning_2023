// Find minimum and maximum in an array
#include <stdio.h>
void minMax(int *arr, int n, int *min, int *max) 
{
    *min=arr[0];
    *max=arr[0];
    for (int i=1;i<n;i++) 
    {
        if (arr[i]< *min) 
        {
            *min=arr[i];
        }
        if (arr[i]> *max) 
        {
            *max=arr[i];
        }
    }
}
int main() 
{
    printf("\n Enter the number of elements in array:\t");
    int n=0;
    scanf("%d",&n);
    int min, max;
    int arr[100]={0};
    printf("\nEnter the elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    minMax(arr, n, &min, &max);
    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);
    return 0;
}
