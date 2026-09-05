#include <stdio.h>

#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int x)
{
    if (rear == MAX - 1)
        return;

    if (front == -1)
        front = 0;

    queue[++rear] = x;
}

int dequeue()
{
    if (front == -1 || front > rear)
        return -1;

    return queue[front++];
}

int main()
{
    int a[] = {-8, 2, 3, -6, 1};
    int n = 5, k = 2;
    int i, j, x, max;

    for (i = 0; i <= n - k; i++)
    {
        front = -1;
        rear = -1;

        for (j = i; j < i + k; j++)
            enqueue(a[j]);

        max = 0;

        while (front <= rear)
        {
            x = dequeue();

            if (x < 0 && (max == 0 || x > max))
                max = x;
        }

        printf("%d ", max);
    }

    return 0;
}
