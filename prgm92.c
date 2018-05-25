#include <stdio.h>
#include<conio.h> 
void main()
{
    long num, a, digit, sum = 0;
    clrscr();
    printf("Enter the number \n");
    scanf("%ld", &num);
    a = num;
    while (num > 0)
    {
        digit = num % 10;
        sum  = sum + digit;
        num /= 10;
    }
    printf("Given number = %ld\n", a);
    printf("Sum of the digits %ld = %ld\n", a, sum);
}
