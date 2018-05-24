#include<stdio.h>
#include<conio.h>
int main()
{
    int a,n,factor;
    clrscr();
    printf("Enter the number:");
    scanf("%d",&n);
    for(a=1;a<n;a++)
    {
         if(n%a==0) 
         {
             factor=a;
         }
    }
    if(factor>1) 
    {
          printf ("is a composite number!");
    }
    else 
    {
          printf (" is not a composite number!");
    }
    return 0;
}
