// string to integer
#include <stdio.h>
int String2Integer(const char* str) {
    int num = 0;
    int i = 0;
    while (str[i] != '\0') {
        int convertedNum = str[i] - '0';
        if (convertedNum>=0 && convertedNum<=9) 
        {
            num=num*10+convertedNum;
        } 
        else 
        {
            break;
        }
        i++;
    }
    return num;
}
int main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    printf("After converstion integer is: %d\n", String2Integer(str));
    return 0;
}
