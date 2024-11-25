#include <stdio.h>

int main()
{
    int number, prod = 1, count = 0;
    printf("Enter the number : ");
    scanf("%d", &number);

    int original = number;

    while (number != 0)
    {
        count++;
        number /= 10;
    }
    int newnum = original;
    int i = 0;
    while (i <= count)
    {
        int digit = original % 10;
        original /= 10;
        if (digit == 0)
        {
            break;
        }
        
        prod = prod * digit;
        
        i++;
    }
    printf("The product of the digits of the number %d is %d", newnum, prod);

    return 0;
}