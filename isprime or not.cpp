#include <iostream>
#include <coniuo.h>
using namespace std;
int main()
{
  int m, i;
  clrscr();
  bool isPrime = true;
  cout << "enter rhe integer: ";
  cin >> m;
  for(i = 2; i <= m / 2; ++i)
  {
      if(m % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "is a prime number";
  else
      cout << "is not a prime number";
  return 0;
}
