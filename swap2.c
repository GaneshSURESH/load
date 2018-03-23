#include <stdio.h>
#include<conio.h>
int main()
{
   int x, y,n;
   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y);
   printf("Before Swapping\nx = %d\ny = %d\n",x,y);
    n = x;
   x    = y;
   y    =n;
   printf("After Swapping\nx = %d\ny = %d\n",x,y);
   return 0;
}
