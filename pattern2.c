#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}