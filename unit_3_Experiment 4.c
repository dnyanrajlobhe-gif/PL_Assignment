#include <stdio.h>

long long factorial(int n)
{
    long long fact = 1;
    int i;

    for (i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}

int main()
{
    int n;

    printf("Enter a non-negative number (0-20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20)
        printf("Invalid input!\n");
    else
        printf("Factorial = %lld\n", factorial(n));

    return 0;
}
