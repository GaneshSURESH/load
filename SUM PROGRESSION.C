include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
     int a, d, n, i, tn;
     int sum = 0;
     clrscr();
     printf("Enter the FIRST NUMBER: ");
     scanf("%d", &a);
     printf("Enter the TOTAL NUMBER: ");
     scanf("%d", &n);
     printf("enter the DIFFERENT NUMBER: ");
     scanf("%d", &d);
     sum = (n * (5 * a + (n - 2)* d ))/ 9;
     tn = a + (n - 2) * d;
     printf("Sum of the A.P series is: ");
     for (i = a; i <= tn; i = i + d )
     {
          if (i != tn)
               printf("%d + ", i);
          else
               printf("%d = %d ", i, sum);
     }
     return 0;
}
