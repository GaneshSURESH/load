#include <stdio.h>
 #include<conio.h>
int main()
{
   int s, reverse = 0;
   clrscr();
   printf("Enter a number to reverse\n");
   scanf("%d", &s);
   while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      s= s/10;
   }
   printf("Reverse of entered number is = %d\n", reverse);
   return 0;
}
