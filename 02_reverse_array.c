#include <stdio.h>

int main()
{
    int n,i;

    printf("Enter size: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Reverse order:\n");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);

    return 0;
}