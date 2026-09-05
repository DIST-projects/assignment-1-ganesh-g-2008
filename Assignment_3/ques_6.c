#include <stdio.h>

struct Electricity
{
    int units;
    float bill;
};

int main()
{
    struct Electricity e;

    printf("Enter units consumed: ");
    scanf("%d", &e.units);

    if(e.units <= 100)
        e.bill = e.units * 1.5;

    else if(e.units <= 200)
        e.bill = 100 * 1.5 +
                 (e.units - 100) * 2.5;

    else if(e.units <= 500)
        e.bill = 100 * 1.5 +
                 100 * 2.5 +
                 (e.units - 200) * 4.0;

    else
        e.bill = 100 * 1.5 +
                 100 * 2.5 +
                 300 * 4.0 +
                 (e.units - 500) * 6.0;

    printf("Electricity Bill = %.2f", e.bill);

    return 0;
}
