#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
   char str[100];
   int i = 0, l = 0, f = 1;
   clrscr();
   puts("EnteR A STRING\n");
   gets(str);
   for(i = 0; str[i] !='\0'; i++)   {
      l = l + 1;  }
   printf("THE NUMBER OF CHARECTER %d\n", l);
   for(i = 0; i <= l-1; i++) {
     if(str[i] == ' ')  {
    f = f + 1; } }
   printf("The number OF LINES IN A GIVEN STRING %d", f);
   getch();
}
