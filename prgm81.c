#include <stdio.h>
#include<conio.h>
int main()
{
    int s,b;
    int diff;
    clrscr();
    printf("Enter first number: ");
    scanf("%d",&s);
    printf("Enter second number: ");
    scanf("%d",&b);
    if( s>b )
        diff=s-b;
    else
        diff=b-s;
    printf("\nDifference between %d and %d is = %d",s,b,diff);
    return 0;
}
