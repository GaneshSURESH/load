#include <stdio.h>
#include<conio.h>
int main() {
    int i = 5;
    int k = 10;
    clrscr();
    printf(" value of i=%d k=% BEFORE SWAPPING, i, k);
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("value of i=%d k=%d after swapping", i, k);
    return 0;
}
