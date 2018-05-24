#include<string>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c,d;
    string s="ganesha";
    a=strlen(s);
    if(a%2==0)
    {
        b=a/2;
        c=s.replace(b,'*');
        cout<<"print c:"<<str;
    }
    else
    {
        b=a/2;
        c=b+1;
        d=s.replace(c,'*');
    }
    return 0;
}
