#include <stdio.h>
// Fibonacci series the series in which 
// the number is the sum of its previous two numbers
// and the first two numbers are 0 and 1.

int main()
{
    int n, i = 2, n1, n2, n3;
    printf("Enter the Number to which you want fibonacci series : ");
    scanf("%d", &n);
    n1 = 0;
    n2 = 1;
    printf("%d\n%d\n", n1, n2);
    while (i < n)
    {
        n3 = n1 + n2;
        printf("%d\n", n3);
        n1 = n2;
        n2 = n3;
        i++;
    }

    return 0;
}