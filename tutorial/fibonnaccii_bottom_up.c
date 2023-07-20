#include<stdio.h>
// /*To get the fibonnacci at a point
// Add the two previous numbers in an array i.e 
// if the length of an array is n,
// the fibonnacci at n is f(n)=f(n-1)+f(n-2)
// -create an array of length n,
// -assign first element, index 0 a value of f(0)=0
// -assign second element, index 1 a value of f(1)=1
// to get the third element, the value is f(0)+f(1)=1
// to get nth element, the value is f(n)=f(n-1)+f(n-2)
// */
typedef enum indexes{zero=0, one, two};


unsigned long long fibbo_array(int target);

unsigned long long fibbo_array(int target) {
    int index; // length of the array
    unsigned long long fib[target + 1];
    fib[zero] = zero;
    fib[one] = one;
    for (index = two; index <= target; index++) {
        fib[index] = fib[index - 1] + fib[index - 2];
        printf("index is %d, value is %llu\n", index, fib[index]);
    }
    return fib[target];
}

int main() {
    int target;
    printf("Enter target integer: ");
    scanf("%d", &target);
    unsigned long long fib_na = fibbo_array(target);
    printf("The value at point n is %llu\n", fib_na);

    return 0;
}
