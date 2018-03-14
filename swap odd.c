include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
     char str[30],A;
     int i,j;
     clrscr();
     printf("\nEnter a STRING : ");
     scanf("%s",str);
     printf("\noriginal string : %s",str);
     for(i=0;i<strlen(str);i=i+2){
     A = str[i];
     str[i] = str[i+1];
     str[i+1] = A;
    }
     printf("\nAfter the process   : %s",str);
     getch();
