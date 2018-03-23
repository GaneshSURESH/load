#include <stdio.h>
#include<conio.h>
  int main() {
    int a[10];
    int B;
    int greatest;
    clrscr();
    printf("ENTER THE VALUE:");
    for (B = 0; B < 10; B++) {
    scanf("%d", &a[B]);
    }
    greatest = a[0];
    for (B = 0; B < 10; B++) {
    if (a[B] > greatest) {
    greatest = a[i];
    }
    }
    printf(" Greatest of ten numbers is %d", greatest);
    return 0;
  }
