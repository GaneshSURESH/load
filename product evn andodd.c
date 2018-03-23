#include <stdio.h>
#include<conio.h>
void main()
{
    int i, num, odd_product = 0, even_product = 0;
 clrscr();
    printf("Enter the value of num\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            even_sum = even_sum * i;
        else
            odd_sum = odd_sum * i;
    }
    printf("product of all odd numbers  = %d\n", odd_sum);
    printf("product of all even numbers = %d\n", even_sum);
}
