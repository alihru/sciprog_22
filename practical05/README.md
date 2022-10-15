
# Practical 5

This repository contains 2 source code files written in C, namely `fibonacci.c` and `arctanh.c`.

In order to compile the files, we can use the GNU compiler on our machine as follows to create 2 executables, named `fibonacci` and `arctanh`:

```
gcc fibonacci -o fibonacci
gcc -lm arctanh.c -o arctanh
```  
The option `-lm` is needed by the GNU compiler to link the `math.h` library with our program contained within `arctanh.c`.

We can then run the programs as follows:

```
./fibonacci
./arctanh
```
The first program ask the user running the program to provide a non-negative integer. It then constructs an array of size $n + 1$, where the first $n + 1$ Fibonacci numbers are stored (with $0$ taken to be the first Fibonacci number). The resultant array is consequently printed to the screen. For example, if the user provides 4 as the input, the following integers would be printed in order: 0 1 1 2 3 ($F_0 = 0$, $F_4 = 3$).

The second program approximates the values of the inverse hyperbolic tangent function using two methods.
* The points at which the function is approximated are equidistant (distance = 0.01) and lie within the interval $[-0.9, 0.9]$. Hence, the function is approximated at $0.9 - (-0.9) + 1 = 181$ points.
* The first method uses the MacLaurin series representation of $arctanh$. The user is asked to input a positive real number $delta$, such that summation terms smaller than $delta$ would be discarded. 
* The second method approximates $arctanh(x)$ as $0.5[\log(1 + x) - \log(1 - x)]$.
* For each of the $x$ values, the  absolute differences between each of the approximated values and `atanh(x)` (value obtained using the `math.h` library implementation) are printed.
* Lastly, the total absolute arrors for the two methods are printed.    

One can observe, that for (relatively) large values of $delta$ (small number of terms included in summation) the absolute errors are large and the agreement is only in 1-2 significant digits, on average. As $delta$ increases, the number of matching significant digits increases to 6-9, on average, and, hence, the accuracy improves substantially. The second method is independent of $delta$ and achieves similar accuracy (agreement in 7-9 digits, on average) in a much more efficient manner. The total absolute errors serve as a testimony to this observation: for $delta = 0.1$, the error for Method 1 is approximately 10.814719 and for $delta = 1 \dot 10^{-10}$ it is approximately 0.000009. For Method 2 the error is constant and approximately equal to 0.000004. 


Further details regarding the code may be found in the comments contained in the source code file.

