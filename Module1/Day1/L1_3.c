//  Write a program to read the 
    //  Roll No
    //  Name (Note, you should read full name of the student including initials)
    //  Marks of Physics, Math and Chemistry
    // Calculate the total, percentage and print the summary.
#include<stdio.h>
void ReadData (char *RNo, char *fName, char *mName, char *lName, float *p, float *m, float *c)
{
  printf ("Enter the Roll number : ");
  scanf ("%s", RNo);
  printf ("\nEnter your First name : ");
  scanf ("%s", fName);
  printf ("\nEnter your Middle name : ");
  scanf ("%s", mName);
  printf ("\nEnter your Last name : ");
  scanf ("%s", lName);
  printf ("\nEnter  marks Mathamatics : ");
  scanf ("%f", m);
  printf ("\nEnter  marks Physics : ");
  scanf ("%f", p);
  printf ("\nEnter  marks chenistry : ");
  scanf ("%f", c);

}

float percentage(float *p, float *m, float *c)
{
    return (((*p+*m+*c)/3));
}
int
main ()
{
    char RollNo[10], middelName[100], firstName[100], lastName[100];
    float phy = 00.00, math = 00.00, che = 00.00;
    ReadData (RollNo, firstName, middelName, lastName, &phy, &math, &che);
    printf("%s %s %s ( %s ) has acheived %.2f%% in maths, physics and Chemistry sybject",firstName,middelName,lastName, RollNo, percentage(&phy, &math, &che));
    return 0;

}