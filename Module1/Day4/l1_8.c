// find total sec (Given HH:MM:SS)
#include <stdio.h>
#include <stdlib.h>
int convert2tnt(const char* str) 
{
    int result = 0;
    int i = 0;
    while (str[i] != '\0') 
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return result;
}
int totalSec(const char* timeStr) 
{
    int hh=0,mm=0,ss=0;
    char hrs[3],mns[3],secs[3];
    for (int i=0;i<2;i++) 
    {
        hrs[i]=timeStr[i];
    }
    hrs[2]='\0'; 
    for (int i=3;i<5;i++) {
        mns[i-3]= timeStr[i];
    }
    mns[2]='\0';
    for (int i=6;i<8;i++) 
    {
        secs[i-6]=timeStr[i];
    }
    secs[2]='\0';
    hh=convert2tnt(hrs);
    mm=convert2tnt(mns);
    ss=convert2tnt(secs);
    int totalSeconds = (hh*3600)+ (mm*60)+ss;
    return totalSeconds;
}
int main() 
{
    char str[9];
    printf("Enter a Time: ");
    scanf("%s",str);
    str[8]='\0';
    printf("Total seconds: %d\n", totalSec(str));
    return 0;
}
