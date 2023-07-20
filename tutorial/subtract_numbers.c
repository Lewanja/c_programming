#include<stdio.h>
int main(){
    int number1, number2, difference;
    printf("Enter the first number:");
    scanf("%d",&number1);
    printf("Enter the second number:");
    scanf("%d", &number2);
    difference = number1 - number2;
    printf("%d %d %d", number1, number2, difference);
    return 0;
}