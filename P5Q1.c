#include <stdio.h>
void main(){
    int a[]={5,20,10,1,6},i;
    int small=a[0],large=a[0];
    for(i=1; i<5; i++){
    if(large < a[i])
    large = a[i];
    if(small > a[i])
    small = a[i];
    }
    printf("Largest = %d & Smallest = %d\n", large, small);
}