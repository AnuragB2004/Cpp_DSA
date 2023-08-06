#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    int nsp = n-1;
    for(int i = 1; i <= n; i++){
        for(int q = 1; q < nsp; q++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        for(int k = 1; k <= 1; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}