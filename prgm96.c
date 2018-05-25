#include<stdio.h>
#include<conio.h>
int main()
{
    int i,r,factor;
    clrscr();
    printf("Enter the number:");
    scanf("%d",&r);
    for(i=1;i<r;i++)
    {
         if(r%i==0) 
         {
             factor=i;
         }
    }
    if(factor>1) 
    {
          printf ("The number is a composite number!");
    }
    else 
    {
          printf ("This is not a composite number!");
    }
    return 0;
}
