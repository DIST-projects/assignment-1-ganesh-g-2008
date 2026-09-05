#include <stdio.h>

#define MAX 5

int q1[MAX], q2[MAX];
int f1 = 0, r1 = -1;
int f2 = 0, r2 = -1;

void push(int x)
{
    while (f1 <= r1)
        q2[++r2] = q1[f1++];

    q1[++r1] = x;

    f1 = 0;

    while (f2 <= r2)
        q1[++r1] = q2[f2++];

    f2 = 0;
    r2 = -1;
}

void pop()
{
    if (r1 == -1)
        printf("Stack Underflow\n");
    else
        printf("Popped: %d\n", q1[f1++]);
}

void display()
{
    int i;

    if (f1 > r1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack: ");
    for (i = f1; i <= r1; i++)
        printf("%d ", q1[i]);

    printf("\n");
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    pop();
    display();

    return 0;
}
