
# Practical 7

This repository contains 2 source code files written in C, namely `exp.c` and `basicmalloc.c`.

In order to compile the files, we can use the GNU compiler on our machine as follows to create 2 executables, named `exp` and `basicmalloc`:

```
gcc -lm exp.c -o exp
gcc basicmalloc.c -o basicmalloc
```  
The option `-lm` is needed by the GNU compiler to link the `math.h` library with our program contained within `exp.c`.

We can then run the programs as follows:

```
./exp
./basicmalloc
```
* The first program asks the user to input a polynomial order $n \geq 1$ and value $x \in \mathbb{R}$, at which they wish to approximate $f(x) = exp(x)$ with the corresponding truncated Taylor series expansion. On completion, the estimates and absolute errors for truncations corresponding to polynomial orders $\leq n$ are printed to the screen, with the last printed line (marked by "<<< User's estimate") corresponding to the user's request.

* The second program uses some basic principles of dynamic array allocation. The user is asked to input an array size $n$. Within the program, `allocatearray` function allocates a memory block of appropriate size for the array. The corresponding array is passed into `fillwithones` function by reference, which initialises all the entries to 1. The resultant array is printed to the screen with `printarray` and ultimately the memory is freed and the corresponding pointer is set to `NULL`.

Further details regarding the code may be found in the comments contained in the source code files.

