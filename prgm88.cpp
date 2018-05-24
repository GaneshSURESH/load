#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, n2, max;
    clrscr();
    cout << "Enter two numbers: ";
    cin >> a >> n2;
    max = (a > n2) ? n1 : n2;
    do
    {
        if (max % a == 0 && max % n2 == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        else
            ++max;
    } while (true);
    return 0;
}
