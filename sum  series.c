#include <stdio.h>
#include<conio.h>
void main()
{
    int i, a, odd_sum = 0, even_sum = 0;
    clrscr();
    printf("ENTER THE VALUES\n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
            even_sum = even_sum + i;
        else
            odd_sum = odd_sum + i;
    }
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
}
