#include<stdio.h>
#include<conio.h>
void main()
{
    int f,c,m[10],i,count=0;
    clrscr();
    printf("enter the a ");
    scanf("%d",&f);
    printf("the searched number");
    scanf("%d",&c);
    for(i=0;i<f;i++)
    {
        scanf("%d",&m[i]);
    }
    for(i=0;i<f;i++)
    {
        if(m[i]%2==1)
        {
            count+=1;
        }
        if(count==c)
        {
            printf("%d",m[i]);
        }
    }
    getch();
}
