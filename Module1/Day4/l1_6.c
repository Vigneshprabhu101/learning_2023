// Convert lower to upper case and vice versa
#include <stdio.h>
void caseToggle(char *str) 
{
    while (*str) 
    {
        if (*str >='a' && *str<='z') 
        {
            *str=*str-32; 
        } 
        else if (*str>='A' && *str<='Z') 
        {
            *str=*str+32;
        }
        str++;
    }
}
int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    caseToggle(str);  
    printf("New string is: %s\n",str);
    return 0;
}
