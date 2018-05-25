#include<stdio.h>
#include<conio.h>
void main()
{
int m,i;
clrscr();
char a[10];
clrscr();
printf("Enter the position:");
scanf("%d",&m);
printf("Enter the string:");
scanf("%s",&a);
printf("The string is:");
for(i=0;i<m;i++)
{
printf("%c",a[i]);
}
getch();
}
