#include <stdio.h>
#include <conio.h>
main()
{
long sec, hr, min, A;
clrcscr();
printf("\nTIME IN SECOND: ");
scanf("%ld", &sec);
hr = sec/3600;
A = sec%3600;
min = A/60;
sec = A%60;
printf("\n\nTime is %ld hrs %ld mins %ld secs", hr, min, sec);
getch();
}
