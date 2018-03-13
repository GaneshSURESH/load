#include <stdio.h>
#include<conio.h>
int main()
{
  int i, spaces;
  char a[30];
  clrscr();
  printf("ENTER A STRING");
  scanf("%s", a);
  for(i=0 ; a[0]!="\0" ; i++)
    {
     if (a[i]=' ')
     {
       spaces++;
     }  }
 printf("Number of SPACES is %d", spaces);
 printf("Number of WORDS is %d", spaces + 1);
 getch();
}
