#include <stdio.h>
#include<conio.h>
#include <string.h>
void swap(int*, int *);
void main()
{
    int num1, num2;
    clrscr();
    printf("\nENTER THE NUMBER:");
    scanf("%d %d", &num1, &num2);
    printf("\nTHE NUMBER BEFORE SWAPPING are Number1= %d Number2 = %d", num1, num2);
    swap(&num1, &num2);
    printf("\nTHE NUMBER AFTER SWAPPING  are Number1= %d Number2 = %d", num1, num2);
}
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
