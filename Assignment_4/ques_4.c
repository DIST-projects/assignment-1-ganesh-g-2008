#include <stdio.h>

#define MAX 10

int s[MAX], temp[MAX];
int top = -1, ttop = -1;

void push(int x)
{
    s[++top] = x;
}

void sortStack()
{
    int x;

    while (top != -1)
    {
        x = s[top--];

        while (ttop != -1 && temp[ttop] > x)
            s[++top] = temp[ttop--];

        temp[++ttop] = x;
    }

    while (ttop != -1)
        s[++top] = temp[ttop--];
}

void display()
{
    int i;

    printf("Sorted Stack: ");
    for (i = top; i >= 0; i--)
        printf("%d ", s[i]);
}

int main()
{
    push(30);
    push(10);
    push(50);
    push(20);
    push(40);

    sortStack();
    display();

    return 0;
}
