#include <stdio.h>

struct Distance
{
    int feet;
    float inches;
};

int main()
{
    struct Distance d[100], sum = {0, 0};
    int n, i;

    printf("Enter number of distances: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter feet and inches: ");
        scanf("%d %f", &d[i].feet, &d[i].inches);

        sum.feet += d[i].feet;
        sum.inches += d[i].inches;
    }

    sum.feet += (int)(sum.inches / 12);
    sum.inches = (int)sum.inches % 12;

    printf("Total Distance = %d feet %.2f inches",
           sum.feet, sum.inches);

    return 0;
}
