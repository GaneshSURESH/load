#include <stdio.h>
#include <conio.h>
int main()
{
  int a, n, fact = 1;
  clrscr();
  printf("Enter a number\n");
  scanf("%d", &n);
  for (a = 1; a <= n; a++)
    fact = fact * a;
  printf("Factorial of %d = %d\n", n, fact);
  return 0;
}
