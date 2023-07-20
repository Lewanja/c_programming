#include<stdio.h>
struct arithmetic_structure
{

    int num1;
    int num2;
};

int difference(struct arithmetic_structure subtract);

int main(){
    struct arithmetic_structure number;
    number.num1 =3;
    number.num2 =3;
    printf("num1 is: %d \n", number.num1);
    printf("num2 is: %d \n", number.num2);
    int sum = number.num1 + number.num2;
    printf("The sum of the structure is :%d \n",sum);
    int subtraction = difference(number);
    printf("The difference is: %d", subtraction);
    return 0;

}

int difference(struct arithmetic_structure subtract ){
    // subtract.num1 = 25;
    // subtract.num2= 2;
    int diff = subtract.num1 - subtract.num2;
    return diff;

}