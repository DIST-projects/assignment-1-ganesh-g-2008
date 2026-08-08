#include <stdio.h>

int main()
{
    int n,i,pos;

    printf("Enter size: ");
    scanf("%d",&n);

    int a[100];

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int value;

    printf("Enter position: ");
    scanf("%d",&pos);

    printf("Enter value: ");
    scanf("%d",&value);

    for(i=n;i>=pos;i--)
        a[i]=a[i-1];

    a[pos-1]=value;
    n++;

    printf("Updated array:\n");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}