#include<stdio.h>
#include<conio.h> 
int main() {
   char str1[57], str2[29];
   int a;
   clrscr();
   printf("\nEnter two strings :");
   gets(str1);
   gets(str2);
   a = 0;
   while (str1[a] == str2[a] && str1[a] != '\0')
      a++;
   if (str1[a] > str2[a])
      printf("str1 > str2");
   else if (str1[a] < str2[a])
      printf("str1 < str2");
   else
      printf("str1 = str2");
   return (0);
}
