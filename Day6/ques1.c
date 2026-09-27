// Write a C program to arrange array elements in ascending order.
#include <stdio.h>
int main(){
    int number_of_size_of_array;

    printf("Enter the size of the array:");
    scanf("%d",&number_of_size_of_array);

    int number_items[number_of_size_of_array],temp;

    for(int i=0;i<number_of_size_of_array;i++){
        printf("Enter the %d number:",i+1);
        scanf("%d",&number_items[i]); 
       }
    for(int i=0;i<number_of_size_of_array;i++){
        for(int j=i+1;j<number_of_size_of_array;j++){
            if(number_items[i]>number_items[j]){
                temp=number_items[i];
                number_items[i]=number_items[j];
                number_items[j]=temp;
            }
        }
    }
    printf("The sorted array is:\n");
    for(int i=0;i<number_of_size_of_array;i++){
        printf("%d ",number_items[i]);
    }
    return 0;
}