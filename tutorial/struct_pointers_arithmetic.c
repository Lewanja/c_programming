#include<stdio.h>
struct struct_pointers_arithmetic
{

    int num1;
    int num2;
};
int multiplication(struct struct_pointers_arithmetic* multiply);

int main(){
    struct struct_pointers_arithmetic* number;
    number->num1 = 6;
    number->num2 = 3;
    int mult = multiplication(number);
    printf("The product implemented using call by reference structure is %d:", mult);
    
    return 0;
}

int multiplication(struct struct_pointers_arithmetic* multiply){
    int product = multiply->num1 * multiply->num2;
    return product;
}