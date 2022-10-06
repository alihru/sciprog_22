
# Practical 4

This repository contains one source code file written in C, namely `area_under_curve_2.c`.

In order to compile the file, we can use the GNU compiler on our machine as follows to create an executable, named `area_under_curve_2`:

```
gcc -lm area_under_curve_2.c -o area_under_curve_2
```  
The option `-lm` is needed by the GNU compiler to link the `math.h` library with our program.

We can then run the program as follows:

```
./area_under_curve_2
```
The written program approximates the area under the function $f(x) = \tan(x)$ between the points $a = 0$ and $b = 60$ (angles measured in degrees) using the Trapezoidal rule.

The approximation happens as follows:
* 13 angles (equidistant between $a$ and $b$) measured in degrees are converted to radians using the `degtorad` function, which was defined in Lecture 3 of Week 4 material;
* $f$ is evaluated at the resultant angles (in radians);
* the values are consequently saved into an array and printed to the screen;
* the array is subsequently used in another function, called `areaundercurve`, which approximates the area in question by summing the first and last elements of the array, as well as all other elements, all of which are scaled by 2;
* the resultant sum is scaled in accordance with the quadrature method.

At the end of the runtime, the approximated area is printed to the screen.

Further details regarding the code may be found in the comments contained in the source code file.
