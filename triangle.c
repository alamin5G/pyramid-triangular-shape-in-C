/**
 * @file triangle.c
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

void main(){
    int row, col, n;
    printf("Enter row value: ");
    scanf("%d",&n);

    for(row = 1; row<=n; row++){
        for(col=n; col>=1; col--){
            if (row < col)
            {
                printf("   ");
            }else{
                printf(" * ");
            }
        }
        printf("\n");
    }
}
