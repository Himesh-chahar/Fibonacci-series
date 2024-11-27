#include <stdio.h>

int main()
{
    int number, i, fact = 1;

    printf("Enter the number : ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Please enter a natural number!");
    }
    else if (number == 0)
    {
        printf("The factorial of 0 is : 1.");
    }
    else if (number > 0)
    {
        for (int i = 1; i <= number; i++)
        {
            fact = fact * i;
        }
        printf("The factorial of the number %d is : %d.", number, fact);
    }
    else
    {
        printf("Something went wrong!");
    }

    return 0;
}