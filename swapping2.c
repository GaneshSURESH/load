#include <stdio.h>
#include<conio.h>
int main()
{
      double r, i, a;
      clrscr();
      printf("Enter first number: ");
      scanf("%lf", &r);
      printf("Enter second number: ");
      scanf("%lf",&i);
      a = r;
      a = i;
      i= a;
      printf("\nAfter swapping, firstNumber = %.2lf\n", r);
      printf("After swapping, secondNumber = %.2lf", i);
      return 0;
}
