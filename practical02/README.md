
# Practical 2

## Contents 

This repository contains two source code (C) files, namely `Sum.c` and `Conversion.c`.

In order to compile the files, we can use the GNU compiler on our machine as follows to create two executable files:

```
gcc -lm Conversion.c -o Conversion
gcc Sum.c -o Sum

```
The option `-lm` is needed for the GNU compiler to link the maths library with our program.

We can then run the programs as follows:

```
./Sum
./Conversion

```
 
`Sum.c` demonstrates the lack of commutativity in floating point arithmetic. Theoretically, the two sums are identical (except for the order in which terms are added - one sum reads $0 + 1 + \frac{1}{2} + ... + \frac{1}{1000}$ and the other reads $0 + \frac{1}{1000} + \frac{1}{999} + ... + \frac{1}{1}$), but summing the terms up on the machine gives slightly different results, due to the rounding off at various stages of addition. 

`Conversion.c` converts the given integer 33554431 from decimal to binary and prints the corresponding binary representation, along with the number of digits.

To convert to binary, the program begins by dividing the integer by 2, records the remainder (1 or 0) and saves the remainder into a character array. This procedure is iteratively performed on the resulting integers, until we reach 1 (which we add to the end of the character array). Normally, the sequence would be reversed, but as the binary representation is symmetric this is not necessary in this particular case.

The number of digits can be obtained by taking the log of 33554431 to the base 2 (how many 2's have to be multiplied to get the integer) and adding 1 (to account for the digit corresponding to 1).   

Additionally, the program prints the integer and float representations of the integer.

 
