#include <stdio.h>

int main()
{
    int a[3], i;
    float b[3];
    char c[3];

    printf("Enter 3 integer elements:\n");
    for (i = 0; i < 3; i++)
        scanf("%d", &a[i]);

    printf("Enter 3 float elements:\n");
    for (i = 0; i < 3; i++)
        scanf("%f", &b[i]);

    printf("Enter 3 character elements:\n");
    for (i = 0; i < 3; i++)
        scanf(" %c", &c[i]);

    printf("\nInteger Array:\n");
    for (i = 0; i < 3; i++)
        printf("Value = %d, Address = %p\n", a[i], (void *)&a[i]);

    printf("\nFloat Array:\n");
    for (i = 0; i < 3; i++)
        printf("Value = %.2f, Address = %p\n", b[i], (void *)&b[i]);

    printf("\nCharacter Array:\n");
    for (i = 0; i < 3; i++)
        printf("Value = %c, Address = %p\n", c[i], (void *)&c[i]);

    return 0;
}

/*
Sample Input:
10 20 30
1.5 2.5 3.5
A B C

Sample Output:
Integer Array:
Value = 10, Address = address_of_a[0]
Value = 20, Address = address_of_a[1]
Value = 30, Address = address_of_a[2]

Float Array:
Value = 1.50, Address = address_of_b[0]
Value = 2.50, Address = address_of_b[1]
Value = 3.50, Address = address_of_b[2]

Character Array:
Value = A, Address = address_of_c[0]
Value = B, Address = address_of_c[1]
Value = C, Address = address_of_c[2]
*/
