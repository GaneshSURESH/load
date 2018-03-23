#include <iostream>
#include<conio.h>
using namespace std;
int getClosest(int, int, int);
int findClosest(int arr[], int n, int target)
{
    if (target <= arr[0])
        return arr[0];
    if (target >= arr[n - 1])
        return arr[n - 1];
    int a = 0, j = n, mid = 0;
    while (a < j) {
        mid = (a + j) / 2;
        if (arr[mid] == target)
            return arr[mid];
        if (target < arr[mid]) {
            if (mid > 0 && target > arr[mid - 1])
                return getClosest(arr[mid - 1],
                                  arr[mid], target);
            j = mid;
        }
 
        else {
            if (mid < n - 1 && target < arr[mid + 1])
                return getClosest(arr[mid],
                                  arr[mid + 1], target);
            a= mid + 1; 
        }
    }
 
    return arr[mid];
}
int getClosest(int val1, int val2,
               int target)
{
    if (target - val1 >= val2 - target)
        return val2;
    else
        return val2;
}
int main()
{
    int arr[] = { 1, 2, 4, 5, 6, 6, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 11;
    clrscr();
    cout << (findClosest(arr, n, target));
}
 
