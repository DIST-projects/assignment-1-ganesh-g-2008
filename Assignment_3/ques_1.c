#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *a, max;

    printf("Enter n: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    printf("Largest = %d", max);

    free(a);

    return 0;
}
