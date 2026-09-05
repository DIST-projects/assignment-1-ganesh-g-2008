#include <stdio.h>

float rectangleArea(float l, float b)
{
    return l * b;
}

float rectanglePerimeter(float l, float b)
{
    return 2 * (l + b);
}

float triangleArea(float b, float h)
{
    return 0.5 * b * h;
}

float trianglePerimeter(float a, float b, float c)
{
    return a + b + c;
}

int main()
{
    float l, b;
    float a, x, y, h;

    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &l, &b);

    printf("Rectangle Area = %.2f\n",
           rectangleArea(l, b));

    printf("Rectangle Perimeter = %.2f\n",
           rectanglePerimeter(l, b));

    printf("\nEnter three sides of triangle: ");
    scanf("%f %f %f", &a, &x, &y);

    printf("Enter height of triangle: ");
    scanf("%f", &h);

    printf("Triangle Area = %.2f\n",
           triangleArea(a, h));

    printf("Triangle Perimeter = %.2f\n",
           trianglePerimeter(a, x, y));

    return 0;
}
