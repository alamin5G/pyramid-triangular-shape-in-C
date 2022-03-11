#include <stdio.h>

void main(){

    int row, col, n;
    printf("enter row value: ");
    scanf("%d", &n);

    for(row =1; row<=n; row++){
        for(col=n; col>=row; col--){
            printf(" * ");
        }
        printf("\n");
    }
}