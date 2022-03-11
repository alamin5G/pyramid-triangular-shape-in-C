#include <stdio.h>

void main(){
    int row, col, n, m=1;
    
    printf("Enter row length: ");
    scanf("%d", &n);
    
    for(row=0; row<n; row++){
        for(col=0; col<=row; col++){
            printf("%d\t", m++);

        }
        printf("\n");
    }
}