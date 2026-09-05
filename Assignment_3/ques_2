#include <stdio.h>

int main()
{
    int a[100], n, i;
    int *p;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = &a[n - 1];

    printf("Reverse order:\n");

    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", *p);
        p--;
    }

    return 0;
}
