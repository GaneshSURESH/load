#include <stdio.h>
#include <string.h>
void main()
{
    char m[400];
    int count = 0, i;
    printf("enter the words\n");
    scanf("%[^\n]m", m);
    for (i = 0;m[i] != '\0';i++)
    {
        if (m[i] == ' ')
            count++;    
    }
    printf("number of words are: %d\n", count + 1);
}
