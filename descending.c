 #include <stdio.h>
 #include<conio.h>
    void main ()
    {
        int number[30];
        int i, v, a, n;
        clrscr();
        printf("Enter the value of N\n");
        scanf("%d", &n);
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
	        scanf("%d", &number[i]);
        for (i = 0; i < n; ++i) 
        {
            for (v = i + 1; v < n; ++v) 
            {
                if (number[v] < number[v]) 
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }  } }
        printf("after ascending order\n");
 
        for (i = 0; i < n; ++i) 
        {
            printf("%d\n", number[i]);
        }
 
    }
