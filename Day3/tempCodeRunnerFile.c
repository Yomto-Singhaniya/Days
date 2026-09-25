#include <stdio.h>
int main(){
    int number_of_size_of_array;

    printf("Enter the size of the array:");
    scanf("%d",&number_of_size_of_array);

    int number_items[number_of_size_of_array],sum=0;

    for(int i=0;i<number_of_size_of_array;i++){
        printf("Enter the %d number:",i+1);
        scanf("%d",&number_items[i]);
        sum+=number_items[i];
    }
printf("The sum of the array elements is: %d",sum);

}