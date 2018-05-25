#include<stdio.h>
#include<conio.h>
void main()
{
int s,r,a[100],i,n;
clrscr();
printf("\n Enter the two numbers:");
scanf("%d%d",&s,&r);
printf("\n Enter the n:");
scanf("%d",&n);
printf("\n Enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>s&&a[i]<r)
{
printf("Yes");
}
else
{
printf("No");
}
}
}
