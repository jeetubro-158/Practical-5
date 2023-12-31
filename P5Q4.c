#include <stdio.h>
void main(){
    int A[]={1,2,4,7,11,16,22};
    int D1[6],D2[5],D3[4];
    int i,j;
    printf("A : ");
    for(i=0; i<7; i++){
        printf("%d\t", A[i]);
    }
    printf("\nD1: ");
    for(i=0; i<6; i++){
        D1[i]=A[i+1]-A[i];
        printf("%d\t", D1[i]);
    }
    printf("\nD2: ");
    for(i=0; i<5; i++){
        D2[i]=D1[i+1]-D1[i];
        printf("%d\t", D2[i]);
    }
    printf("\nD3: ");
    for(i=0; i<4; i++){
        D3[i]=D2[i+1]-D2[i];
        printf("%d\t", D3[i]);
    }
}