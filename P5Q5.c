#include <stdio.h>
void main(){
    int A[]={5,3,1,2,4};
    int i,j;
    for(i=0; i<5; i++){
        for(j=i+1; j<5; j++){
            if(A[i] > A[j]){
                int temp;
                temp=A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    printf("Array in ascending order:\n");
    for(i=0; i<5; i++){
        printf("%d\t", A[i]);
    }
}