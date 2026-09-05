#include <stdio.h>

#define MAX 5

int s1[MAX], s2[MAX];
int top1 = -1, top2 = -1;

void enqueue(int x)
{
    if (top1 == MAX - 1)
    {
        printf("Queue Overflow\n");
        return;
    }

    s1[++top1] = x;
}

void dequeue()
{
    int x;

    if (top1 == -1 && top2 == -1)
    {
        printf("Queue Underflow\n");
        return;
    }

    if (top2 == -1)
    {
        while (top1 != -1)
        {
            x = s1[top1--];
            s2[++top2] = x;
        }
    }

    printf("Deleted: %d\n", s2[top2--]);
}

void display()
{
    int i;

    if (top1 == -1 && top2 == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");

    for (i = top2; i >= 0; i--)
        printf("%d ", s2[i]);

    for (i = 0; i <= top1; i++)
        printf("%d ", s1[i]);

    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    display();

    return 0;
}
