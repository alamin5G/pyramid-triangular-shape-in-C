#include <stdio.h>

void main(){
    int row, col, n;
    
    printf("Enter row length: ");
    scanf("%d", &n);
    
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            printf("* ");

        }
        printf("\n");
    }
}