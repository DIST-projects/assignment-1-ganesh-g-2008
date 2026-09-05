#include <stdio.h>

#define MAX 100

int main()
{
    int a[] = {2, 1, 1, 3, 2, 1};
    int n = 6;
    int freq[MAX] = {0};
    int stack[MAX];
    int ans[MAX];
    int top = -1;
    int i;

    for (i = 0; i < n; i++)
        freq[a[i]]++;

    for (i = n - 1; i >= 0; i--)
    {
        while (top != -1 && freq[stack[top]] <= freq[a[i]])
            top--;

        if (top == -1)
            ans[i] = -1;
        else
            ans[i] = stack[top];

        stack[++top] = a[i];
    }

    for (i = 0; i < n; i++)
        printf("%d ", ans[i]);

    return 0;
}
