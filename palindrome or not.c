#include <stdio.h>
#include<conio.h>
int main()
{
    int s, reversedInteger = 0, remainder, originalInteger;
    clrscr();
    printf("enter the integer: ");
    scanf("%d", &s);
    originalInteger = s;
    while( s!=0 )
    {
        remainder = s%10;
        reversedInteger = reversedInteger*10 + remainder;
        s /= 10;
    }
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    return 0;
}
