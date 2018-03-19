#include <stdio.h>
#include <conio.h>
int main()
{
    int array[50];
    int *ptr;
    int i, j, m, size, n;
    clrscr();
    printf("\n Enter the size of an array: ");
    scanf("%d", &n);
    printf("\n Enter %d elements of an array: ", n);
    for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
    size = n;
    ptr = array;
    for (i = 0; i < size; i++)
    {
       for (j = 0; j < size; j++)
       {
           if (i == j)
           {
               continue;
           }
            else if (*(ptr + i) == *(ptr + j))
            {
                m = j;
                size--;
                while (m < size)
                {
                    *(ptr + m) = *(ptr + m + 1);
                    m++;
                }
                j = 0;
        }}}
    printf("\n ouput values are: ");
    for (i = 0; i < size; i++)
    {
        printf(" %d", array[i]);
    }
    return 0;
}
