#include <stdio.h>

int main()
{
    int n,i,j,flag;

    printf("Enter size: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Unique elements:\n");

    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(i!=j && a[i]==a[j])
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
            printf("%d ",a[i]);
    }

    return 0;
}