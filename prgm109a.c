#include <stdio.h>
#include<conio.h>
int main(void) 
{
	int a[3],s,smallest;
  clrscr();
	for(s=0;s<4;s++)
	scanf("%d",&a[s]);
	smallest=a[0];
	for(s=0;s<4;s++)
	{
		if(a[s]<smallest)
		smallest=a[s];
	}
	printf("%d",smallest);
}
