
# Practical 6

This repository contains 2 source code files written in C, namely `main.c` and `mm.c`, as well as one Makefile, containing instructions on how the program should be compiled. 

In order to compile the files into a single executable called `mmc`, we can make use of the Makefile, by running the following command:

```
make 
```  
Makefile contains detailed instructions, regarding the order in which source code files should be compiled and options required for compilation. GNU compiler is used.

Following compilation, we can run our program as follows:

```
./mmc
```

The program multiplies two matrices $A$ and $B$ and prints matrices $A$, $B$ and $C(= AB)$ to the screen. In the program, the following constants are defined: $n = 5, \ p = 3$ and $q = 4$. $A$ is of size $n \times p$ with entries $a_{ij} = i + j$, while $B$ is of size $p \times q$ with entries $b_{ij} = i - j$. Two auxiliary functions, namely `printmat` and `matmult`, are defined. The instructions for `matmult` are stored in a separate source file, in particular in `mm.c`.

Further details regarding the code may be found in the comments contained in the source code file.

