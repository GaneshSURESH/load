#include<stdio.h>
#include<conio.h>
void main(void)
{
  char str1[87],str2[92];
  int a=0,j=0;
  clrscr();
  printf("\nENTER THE FIRST STRING:");
  gets(str1);
  printf("\nENTER THE SECOND STRING:");
  gets(str2);
  while(str1[a]!='\0')
  i++;
  while(str2[j]!='\0')
  {
    str1[a]=str2[j];
    j++;
    a++; }
  str1[a]='\0';
  printf("\nConcatenated String is %s",str1);
}
