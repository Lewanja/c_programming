#include<stdio.h>

/*
// /*To get the fibonnacci at a point
// Add the two previous numbers in an array i.e 
// if the length of an array is n,
// the fibonnacci at n is f(n)=f(n-1)+f(n-2)
check whether the nth number is one or two.
if the value is either one or two return 1 else return f(n)=f(n-1)+f(n-2)
*/
unsigned long long fib_recurse(int target, unsigned long long memo[]);

unsigned long long fib_recurse(int target, unsigned long long memo[]){
    unsigned long long result;
    if (memo[target]  != 0){
        return memo[target];
        }
    if (target == 0) {
        result = 0;
        return result;
    }
    if (target ==1) {
        result = 1;
        return result;
    }
    if (target == 2){
        result =2;
        return result;
    }
    else{
        result = fib_recurse(target-2, memo)+fib_recurse(target-3, memo);
        memo[target]=result;
        printf("The index is %d, and the result is%llu \n", target, result);
        return result;
       }
}

int main(){
    int target;
    printf("Enter the position you are calculating:");
    scanf("%d", &target);
    unsigned long long memo[target+1];
    unsigned long long i;
    for(i=0; i<=target; i++){
        memo[i]=0;
    }
    unsigned long long fib = fib_recurse(target, memo);
    printf("The result at position is :%llu", fib);
    return 0;
}