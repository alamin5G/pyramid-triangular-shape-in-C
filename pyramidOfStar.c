/**
 * @file pyramidOfStar.c
 * Pyramid of stars
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h> 
void main(){
    int row, col, space, rowSize;
    printf("Enter row size: ");
    scanf("%d", &rowSize);

    for(row=1; row<= rowSize; row++){
        for (space = 1; space<=rowSize-row; space++)
        {
            printf(" ");
        }
        for (col = 1; col<= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}
