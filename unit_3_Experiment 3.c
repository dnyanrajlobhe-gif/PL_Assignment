#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Resultant matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d\t", sum[i][j]);

        printf("\n");
    }

    return 0;
}

/*
Sample Input:
2 2
1 2
3 4
5 6
7 8

Output:
Enter rows and columns: 2 2
Enter first matrix:
1 2
3 4
Enter second matrix:
5 6
7 8
Resultant matrix:
6 8
10 12
*/
