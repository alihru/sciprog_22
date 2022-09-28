
# Practical 3

This repository contains one source code file written in C, namely `area_under_curve.c`.

In order to compile the file, we can use the GNU compile on our machine as follows to create an executable named `area_under_curve`:

```
gcc -lm area_under_curve.c -o area_under_curve
```
  
The option `-lm` is needed by the GNU compiler to link the `math.h` library with our program.

We can then run the program as follows:

```
./area_under_curve
```
The written program approximates the area under the function $f(x) = \tan(x)$ between the points $a = 0$ and $b = \frac{\pi}{3}$ using the Trapezoidal rule.

The approximation involves evaluation of $f$ at thirteen equidistant points (between $a$ and $b$, inclusive) and summing up their corresponding contributions, while scaling each of them appropriately. Lastly, the resulting sum is multiplied by $\frac{b - a}{2 \cdot 12}$, where 12 represents the number of gaps between our thirteen points.  

At the end of the runtime, the approximated area is printed to the screen, together with the absolute difference between the approximated value and log(2), the actual solution of our problem. 

