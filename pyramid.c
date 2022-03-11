/*Pyramid of *  */

#include <stdio.h>

void main(){
    int row, column, n;
    printf("Enter row number: ");
    scanf("%d", &n);
    
    for(row = 0; row<n; row++){

        for(column=n; column>=1; column--){
            
            if (row<column-1)
            {
                printf(" ");
            }else{
                printf(" * ");
            }
            
        }
        printf("\n");
    }
}