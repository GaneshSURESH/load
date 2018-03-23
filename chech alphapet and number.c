#include <stdio.h>
#include<conio.h>
int main()
{
    char ch;
    clrscr();
    printf("Enter any character: ");
    scanf("%c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' IS ALPHAPET.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c'IS DIGIT.", ch);
    }
    else 
    {
        printf("'%c'IS A SPECIAL CHARECTER.", ch);
    }

    return 0;
}
