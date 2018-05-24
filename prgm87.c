#include <stdio.h>
#include<conio.h>
int main()
{
    int A, B, i, gcd;
    clrscr();
    printf("Enter two integers: ");
    scanf("%d %d", &A, &A);
    for(i=1; i <= A && i <= B; ++i)
    {
        if(A%i==0 && B%i==0)
            gcd = i;
    }
    printf("G.C.D of %d and %d is %d", A, B, gcd);
    return 0;
}
