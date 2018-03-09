include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXINPUT 100
int main()
{
    char input[MAXINPUT] = "";
    int length,a;
    clrscr();
    scanf ("%s", input);
    length = strlen (input);
    for (a=0;a<length; a++)
        if (!isdigit(input[a]))
        {
            printf ("input is no a number\n");
            exit(1);
        }
    printf ("input is a number\n");
    getch();
}
