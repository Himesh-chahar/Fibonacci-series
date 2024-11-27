#include<stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter the number 1 : ");
    scanf("%d", &num1);
    printf("Enter the number 2 : ");
    scanf("%d", &num2);

    printf("Number 1 : %d and number 2 : %d before swapping\n", num1, num2);

    num3 = num1;
    num1 = num2;
    num2 = num3;

    printf("Number 1 : %d and number 2 : %d after swapping\n", num1, num2);

    int a, b, c;
    printf("Enter the number 1 : ");
    scanf("%d", &a);
    printf("Enter the number 2 : ");
    scanf("%d", &b);

    printf("Number 1 : %d and number 2 : %d before swapping\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Number 1 : %d and number 2 : %d after swapping", a, b);
    
    return 0;
}