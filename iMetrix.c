/**
 * @file iMetrix.c
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h> 
void main(){
    int row, col,n, i=1;
    printf("Enter row number: ");
    scanf("%d", &n);

    for(row=1; row<=n; row++){
        for(col=1; col<=n; col++){
            if(row==col){
                printf("%d ",i);
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }
}
