#include<stdio.h>
typedef struct Nodes{
    unsigned long long value;
}Node;

typedef enum indexes{zero=0, one, two}indices;

unsigned long long add( Node* a, Node* b);
unsigned long long multiplication(Node* a, Node* b);
unsigned long long subtract(Node* a,Node* b);
unsigned long long fibbo_array(Node* target);

unsigned long long add(Node* a, Node* b){
    
    unsigned long long result = a->value + b->value;
    return result;

}
unsigned long long multiplication( Node* a,  Node* b){
    unsigned long long result = a->value * b->value;
    return result;

}

unsigned long long subtract(Node* a,Node* b){
    unsigned long long result = a->value - b->value;
    return result;

}


unsigned long long fibbo_array(Node* target) {
    unsigned long long index; // length of the array
    unsigned long long fib[(target->value) + 1];
    fib[zero] = zero;
    fib[one] = one;
    for (index = two; index <= target->value; index++) {
        fib[index] = fib[index - 1] + fib[index - 2];
        printf("index is %d, value is %llu\n", index, fib[index]);
    }
    return fib[target->value];
}


int main(){
    Node node1, node2;
    printf("Enter first integer:");
    scanf("%llu", &node1.value);
    printf("Enter second integer:");
    scanf("%llu", &node2.value);
    unsigned long long addition = add(&node1, &node2);
    printf("The result is: %llu \n", addition);
    unsigned long long multiply = multiplication(&node1, &node2);
    printf("The result is: %llu \n", multiply);
    unsigned long long sub = subtract(&node1, &node2);
    printf("The result is: %llu \n", sub);

    Node node_target;
    printf("Enter target integer: ");
    scanf("%d", &node_target.value);
    unsigned long long fib_na = fibbo_array(&node_target);
    printf("The value at point %d is %llu\n", node_target.value, fib_na);
    return 0;
}