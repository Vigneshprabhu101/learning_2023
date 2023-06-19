// Write a function to find biggest of 2 numbers using  if else
#include<stdio.h>
int FindBiggest(int *pa, int *pb)
{
	if(*pa>*pb)
		return 	*pa;
	else
		return *pb;
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