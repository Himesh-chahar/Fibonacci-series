#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int k = 0; k < i-10; k++)
        { printf("  ");
            
        }
        int k;
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}