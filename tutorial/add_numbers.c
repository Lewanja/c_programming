#include<stdio.h>
int multiply(int,int);
float divide(int,int);
int divide_quotient(int, int);
int divide_modulus(int,int);
float divide_type_two(float, float);
int main(){
    int number1, number2, sum;
    printf("Enter the first number:");
    scanf("%d", &number1);
    printf("Enter the second number");
    scanf("%d", &number2);
    sum = number1 + number2;
    printf("%d %d %d \n", number1, number2, sum);
    int multiplication = multiply(number1, number2);
    printf("Multiplication result is \t %d:", multiplication);
    float division=divide(number1,number2);
    printf("Return divide solution \t %f:", division);
    float type_two_division=divide_type_two(number1, number2);
    printf("this result will crash %f:", type_two_division);
    int divide_quotient_sol=divide_quotient(number1, number2);
    printf("The quotient of the numbers is %d: \t", divide_quotient_sol);
    int modulus_div = divide_modulus(number1, number2);
    printf("The modulus is %d:", modulus_div);
    return 0;
}

int multiply(int num1, int num2){
    int mult;
    mult = num1 * num2;
    return mult;
}

float divide(int number1, int number2){
float div;
div = (float) number1/ (float) number2;
return div;
}

float divide_type_two(float number1, float number2){
float div;
div = (float) number1/ (float) number2;
return div;
}

int divide_quotient(int number1, int number2){
    int quotient;
    quotient = number1 / number2;
    return quotient;
}

int divide_modulus(int number1, int number2){
    int modulus;
    modulus = number1 % number2;
    return modulus;
}