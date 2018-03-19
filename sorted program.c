 #include <stdio.h>
 #include<conio.h>
    void main()
    {
        int i, N, a, n, number[30];
        clrscr();
        printf("Enter the value of N \n");
        scanf("%d", &n);
        printf("Enter the NUMBER \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
        for (i = 0; i < n; ++i) 
        {
         for (N = i + 1; N < n; ++N)
            {
                if (number[i] > number[N]) 
                {
 
                    a =  number[i];
                    number[i] = number[N];
                    number[N] = a;
                }
            }
        }
        printf("after the process \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
    }
