#include<stdio.h>

int sum(int*, int*);
int sub(int*,int*);
int multiplication(int*, int*);
float division(int*, int*);

int main(){
    int num1, num2;
    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number");
    scanf("%d", &num2);
    int solution = sum(&num1, &num2);
    printf("The sum of num1 and num2 is %d \n", solution);
    int diff =sub(&num1, &num2);
    printf("The diffrence is \t %d:",diff);
    int product = multiplication(&num1, &num2);
    printf("The product is %d:", product);
    float dividing = division(&num1, &num2);
    printf("The division of the two numbers is %f:",dividing);
}

int sum(int* num1, int* num2){
    int soln = *num1 + *num2;
    return soln;
}

int sub(int* num1,int* num2){
    int subtraction = *num1 - *num2;
    return subtraction;
}
int multiplication(int* num1, int* num2){
    int multiply = *num1 * *num2;
    return multiply;
}

float division(int* num1, int* num2){
    float divide;
    divide = (float)*num1 / (float)*num2;
    return divide;
}