#include <stdio.h>

int main()
{
    float number, sum = 0, count = 0;
    printf("Enter the number : ");
    scanf("%f", &number);

    float orig_number = number;

    while (number != 0)
    {
        count++;
        number /= 10;
    }

    int newnum = (int)(orig_number);

    int i = 0;
    while (i <= count)
    {
        int num = (int)(orig_number) % 10;
        orig_number /= 10;
        sum = sum + num;
        i++;
    }

    printf("The sum of the digits of the number %d is %d", newnum, (int)(sum));

    return 0;
}