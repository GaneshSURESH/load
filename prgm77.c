#include <stdio.h>
#include<conio.h>
int main()
{
    int number, a;
    clrscr();
    printf("Enter a integer: ");
    scanf("%d",&number);
    printf("Factors of %d are: ", number);
    for(a=1; a <= number; a++)
    {
        if (number%a == 0)
        {
          printf("%d ",a);
        }
    }
    return 0;
}
