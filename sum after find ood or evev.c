#include <stdio.h>
 #include<conio.h>
void main()
{
    int s, num, odd_sum = 0, even_sum = 0;
    clrscr();
    printf(enter the value\n");
    scanf("%d", &num);
    for (s = 1; s <= num; s++)
    {
        if (s % 2 == 0)
            even_sum = even_sum + s;
        else
            odd_sum = odd_sum + s;
    }
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
}
