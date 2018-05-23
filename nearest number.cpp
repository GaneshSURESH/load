#include <bits/stdc++.h>
#include<conio.h>
using namespace std;
intnd(int n)
{
    int a = (n / 10) * 10;
    int b = a + 10;
    return (n - a > b - n)? b : a;
}
int main()
{
    int n = 6554;
    cout << round(n) << endl;
    return 0;
}
