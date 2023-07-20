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