#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a, b, r, pro=1,i;
    clrscr();
    cout << "\n\n Find the product of digits of a given number:\n";
    cout << "------------\n";
    cout << " Input a number: ";
    cin >> a;
    b = a;
    for(i=a;i>0;i=i/10)
    {
        r = i % 10;
        pro = pro*r;
    }
    cout << " The product of digits of " << b << " is: " << pro << endl;
}
