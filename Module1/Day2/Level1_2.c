/*  
2. Write a program to swap any type of data passed to an function.

Topics to be covered
- Pointers
- Type Casting
*/
#include <stdio.h>
#include <string.h>
void swap(void* a, void* b, size_t size) {
    unsigned char* ptr1 = (unsigned char*)a;
    unsigned char* ptr2 = (unsigned char*)b;
    unsigned char temp;

    for (size_t i = 0; i < size; i++) {
        temp = *(ptr1 + i);
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = temp;
    }
}

int main() 
{
    unsigned char data1[100], data2[100];
    printf("Enter data 1: ");
    scanf("%s", data1);
    printf("Enter data 2: ");
    scanf("%s", data2);
    size_t size1 = strlen(data1);
    size_t size2 = strlen(data2);
    size_t max_size = size1 > size2 ? size1 : size2;
    printf("\n Before swap\n Data1=%s\tData2=%s\n",data1,data2);
    swap(data1, data2, max_size);
    printf("\n After swap\n Data1=%s\tData2=%s\n",data1,data2);
    return 0;
}
