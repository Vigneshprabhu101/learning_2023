// Write a function to accept an integer (32 bits) and operation type to do the following and return the result to main function.
//     - Set 1st bit, if operation type is 1
//     - Clear 31st bit, if operation type is 2
//     - Toggle 16th bit, if operation type is 3
//   You can consider the below function prototype,
//     - bit_operations(int num, int oper_type);
#include<stdio.h>
#include<stdlib.h>
int bit_operations(int num, int oper_type)
{
   switch(oper_type)
   {
       case 1:
       num=num|1;
       break;
       case 2:
       num=num&(~(1<<31));// make 31st bit to 0 and rest all to 1 and AND with num
       break;
       case 3:
       num=num^(1<<16);// make 16 bit as 1 and EXOR with numberbreak;
       break;
       default:
       printf("Invalid operator ");
       exit(0);
       
   }
   return num;
}
int main()
{
    int num, oper;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Enter the operator: ");
    scanf("%d",&oper);
    printf("=%d",bit_operations(num,oper));
    return 0;
    
}