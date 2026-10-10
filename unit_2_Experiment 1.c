#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 2;
    int result;

    result = a + b * c;

    printf("Result = %d\n", result);

    result = (a + b) * c;

    printf("Result with parentheses = %d\n", result);

    return 0;
}
