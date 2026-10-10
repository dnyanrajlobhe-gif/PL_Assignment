#include <stdio.h>

// 5.1 No Arguments, No Return Value
void area1()
{
    float b, h;
    printf("Enter base and height: ");
    scanf("%f %f", &b, &h);
    printf("Area (No arguments, No return) = %.2f\n", 0.5 * b * h);
}

// 5.2 Arguments, No Return Value
void area2(float b, float h)
{
    printf("Area (Arguments, No return) = %.2f\n", 0.5 * b * h);
}

// 5.3 No Arguments, Returns a Value
float area3()
{
    float b, h;
    printf("Enter base and height: ");
    scanf("%f %f", &b, &h);
    return 0.5 * b * h;
}

// 5.4 Arguments, Returns a Value
float area4(float b, float h)
{
    return 0.5 * b * h;
}

int main()
{
    float b, h, result;

    printf("1. No Arguments, No Return Value\n");
    area1();

    printf("\n2. Arguments, No Return Value\n");
    printf("Enter base and height: ");
    scanf("%f %f", &b, &h);
    area2(b, h);

    printf("\n3. No Arguments, Returns a Value\n");
    result = area3();
    printf("Area = %.2f\n", result);

    printf("\n4. Arguments, Returns a Value\n");
    printf("Enter base and height: ");
    scanf("%f %f", &b, &h);
    result = area4(b, h);
    printf("Area = %.2f\n", result);

    return 0;
}