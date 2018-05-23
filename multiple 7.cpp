#include<iostream>
#include<conio.h>
using namespace std;
int countMultiples(int n)
{
    int res = 0;
    for (int i=1; i<=n; i++)
       if (i%7 == 0)
           res++;
    return res;
}
int main()
{
   cout << "Count = " << countMultiples(56);
}
