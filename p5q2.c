#include <stdio.h>
void main(){
    int arr[]={222,222,223,228,226,229,235,241,245,252,251,279,300,311};
    int sum=0,d,i;
    float avg;
    printf("Enter the da Number between 3 and 12 to get 5 day moving average :");
    scanf("%d", &d);
    d=d-1;
    for(i=(d-2); i<=(d+2); i++){
        sum = sum + arr[i];
    }
    avg = sum / 5;
    printf("5 Days moving average for day %d = %f ", (d+1), avg);
}