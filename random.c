#include<stdio.h>

int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < 4; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}