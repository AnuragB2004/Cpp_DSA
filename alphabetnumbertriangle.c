#include <stdio.h>

int main() {
    int n, i, j;
    char ch = 'A';
    int num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("\nPattern:\n");
    for (i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            for (j = 1; j <= i; j++) {
                printf("%d ", num);
                num++;
            }
        } else {
            for (j = 1; j <= i; j++) {
                printf("%c ", ch);
                ch++;
            }
        }
        printf("\n");
    }

    return 0;
}
