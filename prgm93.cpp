#include <bits/stdc++.h>
using namespace std;
float Celsius_to_Kelvin(float C)
{
    return (C + 273.15);
}
int main()
{
    float C = 100;
    cout << "Temperature in Kelvin ( K ) = "<< Celsius_to_Kelvin(C);
    return 0;
}
