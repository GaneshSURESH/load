#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<math.h>
bool isPowerOfTwo(int a)
{
   return (ceil(log2(a)) == floor(log2(a)));
}
int main()
{
    isPowerOfTwo(31)? printf("Yes\a"): printf("No\a");
    isPowerOfTwo(64)? printf("Yes\a"): printf("No\a");
    return 0;
}
