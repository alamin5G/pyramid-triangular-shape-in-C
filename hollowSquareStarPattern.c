#include <stdio.h>

void main(){
    int row, col, n;

    printf("Enter row size: ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++){
        for (col = 1; col <= n; col++){
            if (row == 1 || col == 1 || row == n || col == n)
            {
                printf(" * "); //start
            }else{
                printf("   ");///3 spaces
            }
            
        }
        printf("\n");
        }
}