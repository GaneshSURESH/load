#include<stdio.h>
#include<conio.h>
unsigned int nextPowerOf2(unsigned int n)
{
    unsigned int h = 1;
    if (n && !(n & (n - 1)))
        return n;
    while (h < n) 
        h <<= 1;
    return h;
}
int main()
{
unsigned int n = 5;
printf("%d", nextPowerOf2(n));
return 0;
}
