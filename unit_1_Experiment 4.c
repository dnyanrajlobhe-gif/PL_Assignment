#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

/*
Sample Input:
10 20

Output:
Enter two numbers: 10 20
Before swapping: a = 10, b = 20
After swapping: a = 20, b = 10
*/
