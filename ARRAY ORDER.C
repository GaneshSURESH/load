#include <stdio.h>
#include<conio.h>
#define MAX_SIZE 1000 
int main()
{
    int arr[MAX_SIZE];
    int i, G;
    clrscr();
    printf("Enter size of array: ");
    scanf("%d", &G);
    printf("Enter %d elements: ", G);
    for(i=0; i<G; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nElements in array: ");
    for(i=0; i<G; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}
