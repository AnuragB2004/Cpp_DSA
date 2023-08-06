#include <stdio.h>

int main()
{
    int row, column;
    int i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);
    for (int i = 1; i <= row; i++)
    {
        for (j = 1; j <= column; j++)
        {
            if (i == 1 || i == row || j == 1 || j == column)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
