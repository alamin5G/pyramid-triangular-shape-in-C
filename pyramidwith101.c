/*pyramid with 101*/

#include <stdio.h>

void main(){
    int row, col, n;
    printf("Enter row value: ");
    scanf("%d", &n);

    for(row = 1; row<=n; row++){
        for(col = n; col>=1; col--){
            
            if(row<col){
                printf(" ");
            }else{
                printf(" %d ", (row+col+1)%2);
            }
        }
        printf("\n");
    }
}