# Q1
typedef struct Node
{
TypeTag type;
} Node;
typedef enum TypeTag {
...
}
Using this structure, please write a function that returns fibonacci sequence based on the following arithmetic operations (+, -, *, /) and conditions.
The fibonacci function should be implemented using Dynamic Programming.

**Solution.**
A fibonacci sequence is a type of recursive function where f(n)=f(n-1)+f(n-2). 
f(3)=f(1)+f(2)=3.
The first 11 results up to index 11 are 0,1,1,2,3,5,8,13,21,34,55.

## Step One.
How to run the code:
- Ensure the necessary C compilers are installed in your computer. 
- To check installed compilers run ``` gcc --version``` or ``` gcc -v``` and ```g++ version``` or ``` g++ -v``` on Windows, macOS or Linux. 
- If a version number is returned, a compiler has been found.
- If no compiler was found, click the [link](https://www.freecodecamp.org/news/how-to-install-c-and-cpp-compiler-on-windows/) to set up on windows 10 or windows11.

To run the code set up Vs code or run on terminal.

  
**Running on visual studio code** 
- To set up visual studio code check the guide by clicking [link](https://code.visualstudio.com/.), remember to select the specific file for your Operationg System.

To run on terminal,  follow guide on the [link](https://randerson112358.medium.com/how-to-run-c-program-in-command-prompt-e435186cd162).

**Solution.**
- struct(structure) - structure is a user defined data type available in C programming, which
allows you to combine data items of different kinds. They are used to represent a record.
To define a structure, you must use the *struct* statement. 
The struct statement defines a new data type, with more than one member for your program. The format of the struct
statement is this:
```
struct [structure tag]
{
 member definition;
 member definition;
 ...
 member definition;
} [one or more structure variables];
```

To access any member of a structure, we use the member access operator (.)
You can define pointers to structures in very similar way as you define pointer to any other
variable as follows:

Example:
To define a structure:
```
typedef struct Nodes{
    unsigned long long value;
}Node;
```
In ``` a->value ```, the -> operator is used to access the members of a structure using a pointer to that structure.
Using pointers on structure in our solution:
```
unsigned long long multiplication( Node* a,  Node* b){
    unsigned long long result = a->value * b->value;
    return result;

}
```

- enum - a user-defined data type that consists of integer values, and it provides meaningful names to these values and makes a program easy to read and maintain.
**Note:**
     -   The compiler automatically assigns the default values to the enum names starting from 0 when no value is given.
    -   Values can be assigned in any order to the enum name and the unassigned names will get the default value as the previous one plus one.
    - The values assigned to the enum names must be integral constant, i.e., it should not be of other types such string, float, etc.
  - All the enum names must be unique in their scope, i.e., if we define two enum having same scope, then these two enums should have different enum names otherwise compiler will throw an error.
  
In our solution enum has been used to solve the fibonacci sequence. It is defined as: 
```
typedef enum indexes{zero=0, one, two} in_dex;
```  

- typedef - This is a keyword in c programming which you can use to give a type a new name. It is preferrable to use uppercase letters for these definitions to remind the user that the
type name is really a symbolic abbreviation, but you can use lowercase
Example:
```typedef signed int POSITIVE_INT;```
***POSITIVE_INT*** can be used as an for abbreviation for ***signed int***.
In our solution, the structure has been defined as Node and thus Node is used repeatedly to access value which is a member of structure Node. 

typedef has been used to define struct to Node as shown:
```
typedef struct Nodes{
    unsigned long long value;
}Node;
```
and enum as 
```
typedef enum indexes{zero=0, one, two} in_dex;
``````
Fibonacci solution:
```
#include<stdio.h>
typedef struct Nodes{
    unsigned long long value;
}Node;

typedef enum indexes{zero=0, one, two} in_dex;

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
    printf("The value at point n is %llu\n", fib_na);
    return 0;
}

```

How the code works:
1. Int main(){}
A main() function is a user-defined function in C that means we can pass parameters to the main() function according to the requirement of a program
This is where the operating system always calls the main() function when a programmers or users execute their programming code.
It is responsible for starting and ending of the program.

2. unsigned long long
Since calculating the fibonacci result of a large value eg 100 returns a long number, unsigned long long is preferred.
The maximum possible integer input can be taken in C using long long int. It has a range of −9,223,372,036,854,775,807 to +9,223,372,036,854,775,807. If you only deal with positive numbers then unsigned long long can be used which has a range of 0 to 18,446,744,073,709,551,615.4

3. To code to solve fibonacci is:

```
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
```
The output is:
```
Enter target integer: 20
index is 2, value is 1
index is 3, value is 2
index is 4, value is 3
index is 5, value is 5
index is 6, value is 8
index is 7, value is 13
index is 8, value is 21
index is 9, value is 34
index is 10, value is 55
index is 11, value is 89
index is 12, value is 144
index is 13, value is 233
index is 14, value is 377
index is 15, value is 610
index is 16, value is 987
index is 17, value is 1597
index is 18, value is 2584
index is 19, value is 4181
index is 20, value is 6765
The value at point 20 is 6765
```
Given the input as 10 and 2:
The code to solve arithmetic:
```
unsigned long long add(Node* a, Node* b){
    
    unsigned long long result = a->value + b->value;
    return result;

}
```
ouput:
```
unsigned long long add(Node* a, Node* b){
    
    unsigned long long result = a->value + b->value;
    return result;

}

```

The code to solve multiplication:
```
unsigned long long multiplication( Node* a,  Node* b){
    unsigned long long result = a->value * b->value;
    return result;

}
```
output:
```
The result is: 20
```
The code to solve subtraction:
```
unsigned long long subtract(Node* a,Node* b){
    unsigned long long result = a->value - b->value;
    return result;

}
```
output:
```
The result is: 8
```

Summary:
To solve the fibonacci sequence, dynamic programming is used.

## REFERENCES
1. [enum in c](https://www.javatpoint.com/enum-in-c#:~:text=The%20enum%20in%20C%20is,by%20using%20the%20enum%20keyword.)
2. c_programming book, Simply Easy Learning by tutorialspoint.com
3. [Unsigned long long](https://discuss.codechef.com/t/how-to-take-big-input-in-c/80#:~:text=The%20maximum%20possible%20integer%20input,range%20of%200%20to%2018%2C446%2C744%2C073%2C709%2C551%2C615.)