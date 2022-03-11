#include <stdio.h>

void main(){
    int row, col, n;
    printf("Enter row size: ");
    scanf("%d", &n);
    for(row = 1; row<=n; row++){
        for(col=1; col<=n; col++){
            printf(" * ");
        }
        printf("\n");
    }
}