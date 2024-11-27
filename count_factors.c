#include<stdio.h>

int main()
{
    int number, count = 0;

    printf("Enter the number : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }

    printf("The total factors of %d (including the number) is : %d", number, count);
    
    return 0;
}