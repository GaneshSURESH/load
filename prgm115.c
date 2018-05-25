#include <stdio.h>
#include<conio.h>
void main()
{
int n,l,count=0,r1,rev=0,r;
clescr();
scanf("%d %d",&n,&l);
if(k==0)
{
	n=n*10;
}
while(l>0)
{
    r=l%10;
    rev=rev*10+r;
    l=l/10;
    count++;
}
while(rev>0)
{r1=rev%10;
    n=n*10+r1;
    rev=rev/10;
}
printf("%d",n);
}
   
