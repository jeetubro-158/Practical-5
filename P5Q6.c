#include <stdio.h>
void main(){
    int matrix[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    int i,j,r1,r2;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Enter row No. to interchange above matrix :\n");
    scanf("%d%d", &r1,&r2);
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            int temp;
            temp = matrix[r1-1][j];
            matrix[r1-1][j] = matrix[r2-1][j];
            matrix[r2-1][j] = temp;
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    

}