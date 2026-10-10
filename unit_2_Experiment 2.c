#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Number is Even");
    else
        printf("Number is Odd");

    return 0;
}

/*
Sample Input:
7

Output:
Enter a number: 7
7 is odd.
*/
