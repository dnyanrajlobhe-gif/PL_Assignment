#include <stdio.h>

int main()
{
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("Area of the circle = %.2f\n", area);

    return 0;
}

/*
Sample Input:
5

Output:
Enter the radius of the circle: 5
Area of circle = 78.50
*/
