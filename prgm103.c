#include <stdio.h>
#include<conio.h>
#define MAX 100
int main()
{
	char str[MAX]={0};	
	int m;
  clrscr();
	printf("Enter a string: ");
	scanf("%[^\n]s",str);
	for(m=0; str[m]!='\0'; m++)
	{
		if(m==0)
		{
			if((str[m]>='a' && str[m]<='z'))
				str[m]=str[m]-32;
			continue;
		}
		if(str[m]==' ')
		{
			++m;
			if(str[m]>='a' && str[m]<='z')
			{
				str[m]=str[m]-32;
				continue;
			}
		}
		else
		{
			if(str[m]>='A' && str[m]<='Z')
				str[m]=str[m]+32;
		}
	}
	printf("Capitalize string is: %s\n",str);
	return 0;
}
