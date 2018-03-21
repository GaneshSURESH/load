#include <stdio.h>
#include<conio.h> 
int main()
{
   int array[100], position, c, n, value;
   clrscr();
   printf("ENTER THE ELEMENT\n");
   scanf("%d", &n);
   printf("Enter %d elements\n", n);
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
   printf("ENTER THE LOCATION\n");
   scanf("%d", &position);
   printf("ENTER THE INSERT VALUE\n");
   scanf("%d", &value);
   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[c];
   array[position-1] = value;
   printf("RESULTEND ARRAY IS\n");
   for (c = 0; c <= n; c++)
      printf("%d\n", array[c]);
   return 0;
}
