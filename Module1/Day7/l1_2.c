/*
2. Case Handler:
Write a C program to copy a file by considering the user option to handle the text case
-u, to change file content to Upper Case
-l, to change file content to Lower Case
-s, to change file content to Sentence Case
if no options are passed then it should be a normal copy

Example, say we have a file f1 with the following content
f1:
-----------------------
This is the file data
testing Case copy
application
-----------------------

./cp -s f1 f2
f2:
-----------------------
This Is The Tile Data
Testing Case Copy
Application
-----------------------

./cp -l f1 f3
f3:
-----------------------
this is the tile data
testing case copy
application
-----------------------

./cp -u f1 f4
f4:
-----------------------
THIS IS THE FILE DATA
TESTING CASE COPY
APPLICATION
-----------------------

./cp f1 f5
Should perform a normal copy
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void upper(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}
void lower(char *str)
{
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
}
void sentenceCase(char *str)
{
    int cap = 1;
    while (*str)
    {
          if (*str == ' ')
            {
                 cap=1;
                    str++;
            }
            if (cap && (*str >= 'a' && *str <= 'z'))
            {
                *str = *str - ('a' - 'A');
                cap = 0;
            }
            else if (!cap && (*str >= 'A' && *str <= 'Z'))
            {
                *str = *str + ('a' - 'A');
            }
            str++;
        }  
    }
int main(int argc, char *argv[])
{
    char *option = argv[1];
    char *ps = argv[2];
    char *pd = argv[3];
    FILE *fs = fopen(ps, "r");
    if (fs == NULL)
    {
        printf("unexpected error\n");
        return 1;
    }
    FILE *fd = fopen(pd, "w");
    if (fd == NULL)
    {
        printf("unexpected error\n");
        return 1;
    }
    char buffer[100];
    size_t byte;
    while ((byte = fread(buffer, 1, 100, fs)) > 0)
    {
        printf("\n%s\n",buffer);
        if (strcmp(option, "-u") == 0)
        {
            upper(buffer);
        }
        else if (strcmp(option, "-l") == 0)
        {
            lower(buffer);
        }
        else if (strcmp(option, "-s") == 0)
        {
            sentenceCase(buffer);
        }
        fwrite(buffer, 1, byte, fd);
    }
    fclose(fs);
    fclose(fd);
    return 0;
}

