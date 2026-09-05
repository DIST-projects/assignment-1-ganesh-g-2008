#include <stdio.h>

#define MAX 100

int queueRow[MAX];
int queueCol[MAX];

int front = 0, rear = 0;

void enqueue(int r, int c)
{
    queueRow[rear] = r;
    queueCol[rear] = c;
    rear++;
}

void dequeue(int *r, int *c)
{
    *r = queueRow[front];
    *c = queueCol[front];
    front++;
}

int main()
{
    int a[3][5] =
    {
        {2, 1, 0, 2, 1},
        {1, 0, 1, 2, 1},
        {1, 0, 0, 2, 1}
    };

    int m = 3, n = 5;
    int i, j;
    int r, c, nr, nc;
    int fresh = 0;
    int time = 0;
    int size;

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == 2)
                enqueue(i, j);

            if (a[i][j] == 1)
                fresh++;
        }
    }

    while (front < rear && fresh > 0)
    {
        size = rear - front;

        for (i = 0; i < size; i++)
        {
            dequeue(&r, &c);

            for (j = 0; j < 4; j++)
            {
                nr = r + dr[j];
                nc = c + dc[j];

                if (nr >= 0 && nr < m &&
                    nc >= 0 && nc < n &&
                    a[nr][nc] == 1)
                {
                    a[nr][nc] = 2;
                    fresh--;
                    enqueue(nr, nc);
                }
            }
        }

        time++;
    }

    if (fresh > 0)
        printf("-1");
    else
        printf("%d", time);

    return 0;
}
