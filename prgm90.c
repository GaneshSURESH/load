#include<stdio.h>
#include<conio.h>
int main()
{
    char line[150];
    int a, j;
    clrscr();
    printf("Enter a string: ");
    gets(line);
    for(a = 0; line[a] != '\0'; ++a)
    {
        while (!( (line[a] >= 'a' && line[a] <= 'z') || (line[a] >= 'A' && line[a] <= 'Z') || line[a] == '\0') )
        {
            for(j = a; line[j] != '\0'; ++j)
            {
                line[j] = line[j+1];
            }
            line[j] = '\0';
        }
    }
    printf("Output String: ");
    puts(line);
    return 0;
}
