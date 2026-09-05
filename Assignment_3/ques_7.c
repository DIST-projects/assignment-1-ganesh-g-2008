#include <stdio.h>

int main()
{
    int n;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("Binary      = ");
    
    int b[32], i = 0, temp;

    temp = n;

    if(temp == 0)
        printf("0");

    while(temp > 0)
    {
        b[i] = temp % 2;
        temp = temp / 2;
        i++;
    }

    while(i > 0)
    {
        i--;
        printf("%d", b[i]);
    }

    printf("\nOctal       = %o", n);
    printf("\nHexadecimal = %X", n);

    return 0;
}
