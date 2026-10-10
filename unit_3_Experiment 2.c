#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        sum += a[i];

    printf("Sum of array elements = %d\n", sum);

    return 0;
}

/*
Sample Input:
5
10 20 30 40 50

Output:
Enter the number of elements: 5
Enter array elements:
10 20 30 40 50
Sum of array elements = 150
*/
