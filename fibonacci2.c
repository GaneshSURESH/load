#include <stdio.h>
#include<conio.h>
void printFibonacciNumbers(int n)
{
    int f1 = 0, f2 = 1, a;
    clrscr();
    if (n < 1)
        return;
    for (a = 1; a <= n; a++)
    {
        printf("%d ", f2);
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}
int main()
{
    printFibonacciNumbers(7);
    return 0;
}
