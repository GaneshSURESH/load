#include<stdio.h>
#include<conio.h> 
int main()
{
   int a, b, c;
   clrscr();
   printf("ENTER THE TWO NUMBERS to add\n");
   scanf("%d%d", &a, &b);
   c = a + b;
   printf("Sum of the numbers = %d\n", c);
   return 0;
}
