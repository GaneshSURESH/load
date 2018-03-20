#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i,s,j;
clrscr();
for(i=0;i<10;i++)
{
printf("Enter the number(%d)",i);
scanf("%d",&a[i]);
}
s=a[0];
for(j=0;j<10;j++)
{
if (n<a[j])
n=a[j];
}
printf("The largest number is : %d",s);
return 0;
}
