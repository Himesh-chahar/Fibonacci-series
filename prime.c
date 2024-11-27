#include<stdio.h>

int main()
{
    int number, count = 0;

    printf("Enter the number : ");
    scanf("%d", &number);

    if (number <= 0)
    {
        printf("Please enter a natural number.");
    }
    else if (number == 1)
    {
        printf("No it is not a prime number.");
    }
    else if (number > 1)
    {
        for (int i = 2; i <= number; i++)
        {
            if (number % i == 0)
            {
                count++;
            }
        }
    }

    if (count>1)
    {
        printf("The number %d is Not prime", number);
    }
    else
    {
        printf("The number %d is Prime.", number);
    }
    
    return 0;
}