#include <stdio.h>

#define MAX 20

int main()
{
    char pattern[] = "DIDI";
    int stack[MAX];
    int top = -1;
    int num = 1;
    int n = 4;
    int i;

    for (i = 0; i <= n; i++)
    {
        stack[++top] = num++;

        if (i == n || pattern[i] == 'I')
        {
            while (top != -1)
            {
                printf("%d", stack[top]);
                top--;
            }
        }
    }

    return 0;
}
