#include <iostream>
#include<conio.h>
using namespace std;
bool inRange(unsigned low, unsigned high, unsigned y)
{
   return (low <= y  && y <= high);
} 
int main()
{
    inRange(10, 100, 30)? cout << "Yes\n":  cout  <<"No\n";
    inRange(10, 100, 5)?  cout << "Yes\n":  cout  <<"No\n";
}
