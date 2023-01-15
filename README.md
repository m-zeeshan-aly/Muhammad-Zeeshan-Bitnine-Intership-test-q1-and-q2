# Muhammad-Zeeshan-Bitnine-Intership-test-q1-and-q2

# Bitnine Intership Text Question No 1

Using this structure, please write a function that returns fibonacci sequence based 
on the following arithmetic operations (+, -,*, /) and conditions. The fibonacci 
function should be implemented using Dynamic Programming.

## Table of contents

- Requirements
- Installations
- Compilation
- Execution
- Code Summary
## Requirements

This module requires the following modules:

Understing of Programming in C language



## Installations

Install C language to your local machine so that code can be run 
and can be seen what it tyring to do.


## Compilation

To compile the following code run the command in terminal: gcc DPAfibq1.c -o DPAfibq1


## Execution

To run the following code to see the out put run the command in terminal: ./DPAfibq1


## Code Summary

This function uses a bottom-up approach to build up the fibonacci sequence, 
starting with the base cases of fib(0) = 0 and fib(1) = 1,
and then building up to the nth value using the provided arithmetic operation. 
The function takes in an integer n, and the operation to be performed. 
The result is returned as a pointer to a Node struct, containing the fibonacci value, 
and it's using the TypeTag enum to store the type of operation.

Note: This function doesn't handle the cases when operation is DIVIDE and the result is negative or when dividing by zero.

# Bitnine Intership Test Question No 2

Implement the following piecewise recurrence relation in the 3 different ways.
Explain the differences (advantages, disadvantages) between the 3.
Must be written in C

## Table of contents

- Requirements
- Installations
- Compilation
- Execution
- Recursive
- Iterative 
- Dynamic Programming
- Code Summary



## Requirements

This module requires the following modules:

Understing of Programming in C language



## Installations

Install C language to your local machine so that code can be run 
and can be seen what it tyring to do.


## Compilation

To compile the following code run the command in terminal: 
gcc method1_Recursive.c -o method1_Recursive
gcc Iterative_method2.c -o Iterative_method2
gcc Dynamic_Programming_method3.c -o Dynamic_Programming_method3


## Execution

To run the following code to see the out put run the command in terminal: 
./method1_Recursive
./Iterative_method2
./Dynamic_Programming_method3


## Recursive

The first method, the recursive method, calculates the nth fibonacci number by recursively 
calling the function with the input decremented by 3 and 2 until the base cases of 0, 1, 2 
are reached. This method has the advantage of being simple to understand and implement, but 
the disadvantage is that it can be very slow and inefficient for large inputs due to the 
large number of function calls and the fact that many subproblems are solved multiple times.


## Iterative 

The second method, the iterative method, calculates the nth fibonacci number by iterating 
from 3 to n and at each step calculating the next fibonacci number in the sequence. This 
method has the advantage of being faster than the recursive method, but it requires more 
space to store the intermediate values.


## Dynamic Programming

The third method, the dynamic programming method, is similar to the iterative method but it 
uses an array, memo, to store the intermediate values of the fibonacci sequence. This method 
has the advantage of being both fast and space-efficient because it avoids recalculating the 
same values multiple times.


## Code Summary

In summary, the recursive method is simple to understand but slow and inefficient, the 
iterative method is faster but requires more space, and the dynamic programming method is both
fast and space-efficient.
