#include <stdio.h>

struct Complex
{
    float real;
    float imag;
};

struct Complex add(struct Complex a, struct Complex b)
{
    struct Complex c;

    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;

    return c;
}

int main()
{
    struct Complex c1, c2, result;

    printf("Enter real and imaginary part of first number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and imaginary part of second number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    result = add(c1, c2);

    printf("Sum = %.2f + %.2fi",
           result.real, result.imag);

    return 0;
}
