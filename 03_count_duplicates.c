#include <stdio.h>

int main()
{
    int n,i,j,count=0;

    printf("Enter size: ");
    scanf("%d",&n);

    int a[n],visited[n];

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        visited[i]=0;
    }

    for(i=0;i<n;i++)
    {
        if(visited[i]==1)
            continue;

        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                visited[j]=1;
                count++;
            }
        }
    }

    printf("Duplicate elements = %d",count);

    return 0;
}