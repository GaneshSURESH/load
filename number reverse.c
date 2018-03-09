#include <stdio.h>
#include <conio.h>
int main()
{
    int n, a = 0, b;
    clrscr();
    printf("Enter a new number: ");
    scanf("%d", &n);
    while(n != 0)
    {
        b = n%10;
        a = a*10 + b;
        n /= 10;
    }

    printf("a = %d",a);
    return 0;
}
