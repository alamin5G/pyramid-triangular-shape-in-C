#include <stdio.h>

void main(){
    int row, col, n, m=1;
    printf("Enter row size: ");
    scanf("%d", &n);

    for(row =1; row<=n; row++){
        for(col =1; col<=n; col++){
            printf("%d\t", m++);
        }
        printf("\n");
    }
}