#include <iostream>
#include<conio.h>
using namespace std;
int summation(int n)
{
         int sum = 0;
         clrscr();
         for (int i = 1; i <= n; i++)
         sum += (i * i);
         return sum;
}
int main()
{
    int n = 2;
    cout << summation(n);
    return 0;
}
