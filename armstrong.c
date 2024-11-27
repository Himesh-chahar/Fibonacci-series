#include <stdio.h>
#include <math.h>

int main()
{
    int number, count = 0, i, sum_digit = 0;
    double digit_power;

    printf("Enter the number : ");
    scanf("%d", &number);

    int original = number;

    while (number != 0)
    {
        count++;
        number /= 10;
    }

    // printf("%d", count);

    int new_original = original;

    for (int i = 0; i <= count; i++)
    {
        int digit = original % 10;
        
        original /= 10;
        digit_power = pow(digit, count);
        sum_digit = sum_digit + digit_power;
    }

    if (sum_digit == new_original)
    {
        printf("The number %d is an Armstrong number.", new_original);
    }
    else
    {
        printf("The number %d is not an Armstrong number.", new_original);
    }

    return 0;
}