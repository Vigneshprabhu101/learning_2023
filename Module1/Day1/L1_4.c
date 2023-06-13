// Write a simple calculator program which should accept inputs in the same order.
//     - Operand 1
//     - Operator
//     - Operand 2
// The order of scan should be same, for example, you should first scan in the following order.
// printf("Enter Number1: );
// Scan the first number form the user.
// printf("Enter the operator: );
// Scan the operator from the user.
// printf("Enter Number2: );
// Scan the second number form the user.
#include<stdio.h>
#include<stdlib.h>
float calculate(float *a, float*b, char *o)
{
    switch(*o)
    {
        case '+':
        return *a+*b;
        break;
        case '-':
        return *a-*b;
        break;
        case 'x':
        return (*a)*(*b);
        break;
        case '/':
        return *a/(*b);
        break;
        default:
        printf("Invalid input");
        exit(0);
    }
}
int main()
{
    float a,b;
    char o='1';
    printf("Enter first number : ");
    scanf("%f",&a);
    printf("\nEnter operator ( + - x /) : ");
    scanf(" %c",&o);
    printf("\nEnter second number : ");
    scanf("%f",&b);
    printf("\n=%.2f",calculate(&a,&b,&o));
    return 0;

    
}