#include<stdio.h>
#include<conio.h>
int main()
{
  int a[50],size,i,big,small;
  clrscr();
  printf("\nENTER THE VALUE OF ARRAY: ");
  scanf("%d",&size);
  printf("\nEnter %d ELEMENTS: ", size);
  for(i=0;i<size;i++)
      scanf("%d",&a[i]);
  big=a[0];
  for(i=1;i<size;i++){
      if(big<a[i])
           big=a[i];
  }
  printf("LARGEST NUMBER: %d",big);
  small=a[0];
  for(i=1;i<size;i++){
      if(small>a[i])
           small=a[i];  }
  printf("Smallest element: %d",small);
  return 0;}
