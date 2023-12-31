#include <stdio.h>
void main(){
    int A[]={5,2,4,1,8};
    int B[]={2,6,7,4,8};
    int i,j;
    printf("Following element appears in both Arrays:\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
        if(A[i] == B[j])
        printf("%d\t", B[j]);
        }
    }
}