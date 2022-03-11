#include <stdio.h>

void main(){
    int row, col, n;
    
    printf("Enter row length: ");
    scanf("%d", &n);
    
    for(row=0; row<n; row++){
        for(col=0; col<=row; col++){
            printf("%d ", (row+col+1)%2);

        }
        printf("\n");
    }
}