
# Practical 8

This repository contains 2 source code files written in C, namely `iterative.c` and `recursive.c`.

In order to compile the files, we can use the GNU compiler on our machine as follows to create 2 executables, named `iterative` and `recursive`:

```
gcc iterative.c -o iterative
gcc recursive.c -o recursive
```

We can then run the programs as follows:

```
./iterative
./recursive
```
Both programs have the same purpose:

* The user is asked to input 2 non-zero integers, $a$ and $b$.
* The programs compute the GCD of the 2 integers using Euclid's algorithm:
  - `iterative`does so in an iterative manner, which involves the use of a `while` loop, which runs if the remainder from the last step is not equal to 0; 
  - `recursive` gets the GCD recursively, with the function being called from within the function until the remainder of 0 is observed;
* Initially, $b$ is divided into $a$. The remainder is $a \ mod \ b$. The remainder becomes the divisor for the next step, while the divisor becomes the number being divided.
As described above, the algorithm halts when remainder of 0 is observed. 

Further details regarding the code may be found in the comments contained in the source code files.

