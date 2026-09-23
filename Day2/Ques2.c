// 1. Read and Display Elements of an Array
// Question: Write a C program to input 5 elements into an array and display them.
#include <stdio.h>
int main(){
    int number_items[5];
for(int i=0 ;i<5;i++){
    printf("Enter the elements:");
    scanf("%d",&number_items[i]);
}
for(int i=0;i<5;i++){
    printf("%d ",number_items[i]);

}
}
   