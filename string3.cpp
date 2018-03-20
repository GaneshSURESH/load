#include <bits/stdc++.h>
#include <string>
#include<conio.h>
using namespace std;
string repeat(string s, int n)
{
    string s1 = s;
    for (int i=1; i<n;i++)
        s += s1;
    return s;
}
int main()
{
    string s = "human";
    int n = 3;
    clrscr();
    cout << repeat(s, n) << endl;;
    return 0;
}
