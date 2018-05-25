#include <bits/stdc++.h>
#include<conio.h>
using namespace std;
long long mulmod(long long a,long long  b,long long c) 
{
    if (x == 0 || b == 0)
        return 0;
    if (x == 1)
        return b;
    if (b == 1)
        return x;
    long long x2 = mulmod(x, b / 2, c);
    if ((b & 1) == 0) 
    {
        return (x2 + x2) % c;
    } 
    else 
    {
        return ((x % c) + (x2 + x2)) % c;
    }
}
int main() 
{ 
    long long x,b,c;
    cin>>a>>b>>c;
    cout << mulmod(x,b,c) <<endl;
    return 0;
}
