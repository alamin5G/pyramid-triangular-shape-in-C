/*pyramid with number*/

#include <stdio.h>

void main(){
    int row, col, n;
    printf("Enter row number: ");
    scanf("%d", &n);

    for(row = 1; row<=n; row++){
        for(col=n; col>=1; col--){
            if(row < col){
                printf(" ");
            }else{
                printf(" %d ", row);
            }
        }
        printf("\n");
    }
}