#include <iostream>
#include <string>
using namespace std;
int count(string s, char c)
{
    int res = 0;
    clrscr();
    for (int i=0;i<s.length();i++)
        if (s[i] == c)
            res++;
    return res;
}
int main()
{
    string str= "GANESHSURESH";
    char c = 'e';
    cout << count(str, c) << endl;
    return 0;
}
