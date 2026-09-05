#include <stdio.h>

int main()
{
    int a[] = {6, 8, 4, 5, 2, 3};
    int n = 6;
    int i, j, temp;
    int num1 = 0, num2 = 0;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            num1 = num1 * 10 + a[i];
        else
            num2 = num2 * 10 + a[i];
    }

    printf("Number 1 = %d\n", num1);
    printf("Number 2 = %d\n", num2);
    printf("Minimum Sum = %d\n", num1 + num2);

    return 0;
}
