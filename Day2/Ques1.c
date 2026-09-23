// // Smart Billing System (Using Arithmetic and Relational Operators). A
// supermarket wants to automate its billing system. The system should

#include<stdio.h>
int main(){
    int number_of_items;
    float price_per_items,Total_price=0,discount=0;

    printf("Enter the number of items purchased: ");
    scanf("%d",&number_of_items);

    for(int i=1;i<=number_of_items;i++){
        printf("Enter the price of %d item: ",i);
        scanf("%f",&price_per_items);
        Total_price+=price_per_items;
    }

    if(Total_price>1000){
        discount=Total_price*0.1;
    }
    if(Total_price>500){
        discount=Total_price*0.05;
    }
    
    printf("Total price: %.2f\n", Total_price);
    printf("Discount: %.2f\n", discount);
    printf("Final price: %.2f\n", Total_price - discount);
    return 0;
}