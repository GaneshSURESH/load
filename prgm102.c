#include <stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int a[20],i=0,m;
clrscr();
printf("enter the number of elements");
scanf("%d",&m);
printf("enter the array elements");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
    while((a[i]%2)==0)
    {
        a[i]=a[i]/2;
    }
    printf("%d\t",a[i]);
}

    return 0;
}
