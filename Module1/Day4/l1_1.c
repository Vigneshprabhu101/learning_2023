//Find sum and average
#include <stdio.h>
int main() 
{
    printf("\n Enter the number of elements in array:\t");
    int n=0;
    scanf("%d",&n);
    int arr[100] = {0};
    int sum = 0;
    float average=0.00;
    printf("\nEnter the elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++) 
    {
        sum += arr[i];
    }
    average = (float)sum/n;
    printf("Sum of the array: %d\n", sum);
    printf("Average of the array: %.2f\n", average);    
    return 0;
}
