// 4. Find the Largest Element
// Question: Write a C program to find the largest element in a 1-D array.
#include <stdio.h>
int main(){
   int number_of_size_of_array;

    printf("Enter the size of the array:");
    scanf("%d",&number_of_size_of_array);

    int number_items[number_of_size_of_array],largest_no=0;

    for(int i=0;i<number_of_size_of_array;i++){
        printf("Enter the %d number:",i+1);
        scanf("%d",&number_items[i]); 
       }
    for(int i=0;number_items[i]>largest_no;i++){
       
       if(number_items[i]>largest_no){
        largest_no=number_of_size_of_array;
       }

    }
       printf("Enter the larget november is:%d",largest_no);
}
