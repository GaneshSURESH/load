#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() 
{ 
int a, ans; 
clrscr(); 
printf("ENTER THE VALUE: "); 
scanf("%d",&a); 
ans=pow(a, 1.0/3.0);
ans++;
printf("\n\Cube of %d is: %d",a,ans); 
getch(); 
}
