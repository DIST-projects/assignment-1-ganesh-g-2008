#include <stdio.h>
#include <string.h>

#define MAX 5

char history[MAX][50];
int top = -1;

void visit(char page[])
{
    if (top == MAX - 1)
    {
        printf("History is full\n");
        return;
    }

    strcpy(history[++top], page);
    printf("Visited: %s\n", page);
}

void back()
{
    if (top == -1)
    {
        printf("No previous page\n");
        return;
    }

    printf("Going back from: %s\n", history[top]);
    top--;

    if (top >= 0)
        printf("Current page: %s\n", history[top]);
    else
        printf("No page in history\n");
}

void display()
{
    int i;

    printf("\nWeb History:\n");

    for (i = top; i >= 0; i--)
        printf("%s\n", history[i]);
}

int main()
{
    visit("Google");
    visit("YouTube");
    visit("Wikipedia");

    display();

    printf("\n");
    back();

    printf("\n");
    display();

    return 0;
}
