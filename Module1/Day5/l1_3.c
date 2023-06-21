/*
3. Write a program using structures to calculate the difference between two time periods using a user-defined function.
*/
#include <stdio.h>
struct Time {
    int hh;
    int mm;
    int ss;
};
struct Time read() 
{
    struct Time t;
    printf("Enter hours: ");
    scanf("%d", &t.hh);
    printf("minutes: ");
    scanf("%d", &t.mm);
    printf("seconds: ");
    scanf("%d", &t.ss);
    return t;
}
struct Time diff(struct Time t1, struct Time t2) 
{
    struct Time result;
    int s1=t1.hh * 3600 + t1.mm * 60 + t1.ss;
    int s2=t2.hh * 3600 + t2.mm * 60 + t2.ss;
    int difference=s1-s2;
    result.hh=difference/3600;
    difference %= 3600;
    result.mm=difference/60;
    result.ss=difference%60;
    return result;
}
int main() 
{
    struct Time time1,time2,timeDiff;
    printf("Enter the first time:\n");
    time1=read();
    printf("\nEnter the second time:\n");
    time2=read();
    timeDiff=diff(time1, time2);
    printf("\nDifference is :\n%d hours\n%d minutes\n%d seconds\n",timeDiff.hh,timeDiff.mm,timeDiff.ss);
    return 0;
}
