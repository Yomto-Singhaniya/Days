// .CAP to input of float caste it to integer and perform mathematics operation on both type
#include <stdio.h>
int main() {
    float f_input, f_result;
    int i_cast, i_val = 5;
    printf("Enter a float number: ");
    scanf("%f", &f_input);
    i_cast = (int)f_input;
    f_result = f_input + i_val; 
    int i_result = i_cast * i_val;
    printf("Casted integer: %d\n", i_cast);
    printf("Float + Int result: %.2f\n", f_result);
    printf("Cast Int * Int result: %d\n", i_result);

    return 0;
}
