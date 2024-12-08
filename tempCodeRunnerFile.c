#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int k = n - i; k > 0; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= ((2*i)-1); j++)
        {
            printf("*");
        }
        printf("\n");
        
    }

    return 0;
}