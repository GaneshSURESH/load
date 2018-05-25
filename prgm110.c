#include<stdio.h>
#include<conio.h>
int main()
{
    
    int b,a,sum;
    clrscr();
    printf("last number");
    scanf("%d",&b);
    for(a=0;a<=b;a++)
    {
        sum+=a;  
    }
    printf("%d",sum);
    return 0;
