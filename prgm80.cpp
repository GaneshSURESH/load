#include <iostream>
#include<conio.h>
using namespace std;
int main() {
    int input, a, even = 0, odd = 0;
    int evenArray[even];
    int oddArray[odd];
    cout << "This program accepts integers until you enter 0.\nPlease enter a value: ";
    cin >> input;
    while (input != 0) {
        a = input % 2;
        if (a == 0) {
            evenArray[even] = input;
            even++;
        }
        else {
            oddArray[odd] = input;
            odd++;
        }
        cout << "Enter another integer: ";
        cin >> input;
    }
    cout << "\nThe number of evens is " << even << ".\n";
    cout << "The even values are: ";
    for(int i = 0; i < even; i++) {
        cout << evenArray[i] << " ";
    }
    cout << endl;
    cout << "The number of odds is " << odd << ".\n";
    cout << "The odd values are: ";
    for(int i = 0; i < odd; i++) {
        cout << oddArray[i] << " ";
    }
    return 0;
}

