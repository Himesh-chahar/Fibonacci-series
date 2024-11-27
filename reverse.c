#include <stdio.h>
#include <math.h>

int main()
{
    int number, count = 0, digit;
    double newnumber = 0;
    printf("Enter the number : ");
    scanf("%d", &number);

    int original = number;

    while (number != 0)
    {
        count++;
        number = number / 10;
    }

    int original2 = original;

    for (int i = 1; i <= count; i++)
    {
        digit = original % 10;
        original /= 10;
        newnumber = newnumber + (digit * pow(10.0, count - i));
    }

    printf("The reverse of the number %d is : %d", original2, (int)(newnumber));

    return 0;
}