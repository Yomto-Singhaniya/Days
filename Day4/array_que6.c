// A fitness application records the number of steps taken every hour. An hour is considered a peak hour if the number of steps is greater than both the previous and next hour.
// Problem Statement
// Count the number of elements that are greater than both their immediate neighbors.
// The first and last elements cannot be considered peaks.

#include <stdio.h>
int main(){
    int num;

    printf("Enter the number of size of array: ");
    scanf("%d",&num);

    int arr[num];

    printf("Enter the elements of the array: \n");
    
    for(int i=0;i<num;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    
    for(int i=1;i<num-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d is a peak element\n",arr[i]);
        }
    }
    return 0;

}