#include <stdio.h>

int main()
{
    int n, i, j, k;
    char ch;

    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i-1; j--)
            printf("  ");

        ch = 'A';
        for (k = 1; k <= i; k++)
        {
            printf("%c ", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}
