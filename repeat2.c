#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void printRepeating(int arr[], int size)
{
  int m, j;
  clrscr();
  printf(" Repeating elements are ");
  for(m = 0; m < size; m++)
  for(j = m+1; j < size; j++)
  if(arr[m] == arr[j])
   printf(" %d ", arr[m]);
}     
int main()
{
  int arr[] = {4, 2, 4, 5, 2, 3, 1};
  int arr_size = sizeof(arr)/sizeof(arr[0]);  
  printRepeating(arr, arr_size);
  getchar();
  return 0;
}
