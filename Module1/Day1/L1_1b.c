// Write a function to find biggest of 2 numbers using ternary operator
#include<stdio.h>
int FindBiggest(int *pa, int *pb)
{
	int num=*pa>*pb?*pa:*pb;
	return num;
}
int main()
{
	int a=0,b=0;
	int *pa=&a, *pb=&b;
	printf("Enter two numbers :\n");
	scanf("%d %d",&a,&b);
	printf("Biggest of two is : %d",FindBiggest(&a,&b));
	return 0;
}
	