#include <stdio.h>
#include<conio.h>
int main()
{
    float p, t, r, SI;
    clrscr();
    printf("Enter principle:- ");
    scanf("%f", &p);
    printf("Enter time: ");
    scanf("%f", &t);
    printf("Enter rate: ");
    scanf("%f", &r);
    SI = (p * t * r) / 100;
    printf("SI = %f", SI);
}
