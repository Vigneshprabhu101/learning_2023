/*
2. Write a C program that uses functions to perform the following operations: 
     i) Reading a complex number 
     ii) Writing a complex number 
     iii) Addition of two complex numbers 
     iv) Multiplication of two complex numbers 
  (Note: represent complex number using a structure.
*/
#include <stdio.h>
struct complexNumber 
{
    float r;
    float i;
};
void read(struct complexNumber *num) 
{
    printf("Enter the real number: ");
    scanf("%f",&(num->r));
    printf("Enter the imaginary number: ");
    scanf("%f",&(num->i));
}
void write(struct complexNumber num) 
{
    printf(" %.2f + %.2fi\n",num.r,num.i);
}
void add(struct complexNumber c1, struct complexNumber c2, struct complexNumber *sum) 
{
    sum->r = c1.r + c2.r;
    sum->i = c1.i + c2.i;
}
void mul(struct complexNumber c1, struct complexNumber c2, struct complexNumber *pro) 
{
    pro->r = (c1.r * c2.r) - (c1.i * c2.i);
    pro->i = (c1.r * c2.i) + (c1.i * c2.r);
}
int main() 
{
    struct complexNumber num1, num2, sum, pro;
    printf("First complex number :\n");
    read(&num1);
    printf("\nSecond complex number \n");
    read(&num2);
    printf("\n");
    printf("First complex number:\n");
    write(num1);
    printf("Second complex number:\n");
    write(num2);
    printf("\n");
    add(num1, num2, &sum);
    printf("Sum of the complex number is:\n");
    write(sum);
    mul(num1, num2, &pro);
    printf("Product of the complex number is:\n");
    write(pro);
    return 0;
}
