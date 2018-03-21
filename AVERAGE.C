#include <stdio.h>
#include<conio.h>
int main() {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int sum, loop;
   float avg;
   clrscr();
   sum = avg = 0;
   for(loop = 0; loop < 10; loop++) {
      sum = sum + array[loop];
   }
   avg = (float)sum / loop;
   printf("AVERAGE VALUE IS %.2f", avg);   
   return 0;
}
