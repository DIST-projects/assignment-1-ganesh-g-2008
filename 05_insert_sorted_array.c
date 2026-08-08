#include <stdio.h>

int main()
{
    int n,i,pos;

    printf("Enter size: ");
    scanf("%d",&n);

    int a[100];

    printf("Enter sorted elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int value;

    printf("Enter value to insert: ");
    scanf("%d",&value);

    for(i=0;i<n;i++)
    {
        if(value<a[i])
        {
            pos=i;
            break;
        }
    }

    for(i=n;i>pos;i--)
        a[i]=a[i-1];

    a[pos]=value;
    n++;

    printf("Array after insertion:\n");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}