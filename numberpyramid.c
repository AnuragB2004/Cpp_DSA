#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        k = 1;
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d", k);
            k++;
        }

        printf("\n");
    }

    return 0;
}
