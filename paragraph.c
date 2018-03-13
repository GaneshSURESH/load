#include <stdio.h>
#include<conio.h>
int main()
{
 FILE *a;
 char filename[100];
 char ch;
 int linecount, wordcount, charcount;
 clrscr();
 linecount = 0;
 wordcount = 0;
 charcount = 0;
  printf("ENTER FILE NAME :");
  gets(filename);
   a = fopen(filename,"r");
   if ( a )
   {	
	   while ((ch=getc(a)) != EOF) {
		    if (ch != ' ' && ch != '\n') { ++charcount; }
		   if (ch == ' ' || ch == '\n') { ++wordcount; }
		   if (ch == '\n') { ++linecount; }
	   }
	   if (charcount > 0) {
		++linecount;
		++wordcount;
	   }
    }
   else
      {
         printf("Failed to open the file\n");
        }

    printf("Lines : %d \n", linecount);
    printf("Words : %d \n", wordcount);
    printf("Characters : %d \n", charcount);

getchar();
return(0);
}
