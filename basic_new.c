#include <stdio.h>

int main()
{
    int number, count = 0, sum = 0, prod = 1;;
    printf("Enter the number : ");
    scanf("%d", &number);

    int original = number;

    while (number != 0)
    {
        count++;
        number = number / 10;
    }

    for (int i = 0; i <= count; i++)
    {
        int digit = original % 10;
        original /= 10;

        // printf("%d\n", digit);

        if (digit % 2 == 0)
        {
            sum = sum + digit;
        }
        else
        {
            prod = prod * digit;
        }
    }

    printf("Product of Odd is %d\n", prod);
    printf("Sum of Even is %d", sum);
    return 0;
}