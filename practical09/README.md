# Practical 9

This repository contains 4 files:

- `magic_square.h` - header file, containing the declaration and definition of function `isMagicSquare()`, which finds whether a given 2D array is a magic square;
- `main.c` - the main source code file, which asks the user to provide the name of the text file, containing details regarding a specific array and returns 1 if the array is a magic square and 0 otherwise;
- `matrix_magic.txt` - text file containg an example of a magic square in appropriate format (see above);
- `matrix_nonmagic.txt` - text file containg an example of a non-magic square in appropriate format (see above);

Before compiling and running the program, one need to make sure that all files are within the same directory, which is set as the working directory.

In order to compile the files, we can use the GNU compiler on our machine as follows to create an executable, named `main`:

```
gcc main.c -o main
```

We can then run the programs as follows:

```
./main
```

The program runs as follows:

- The user provides the name of the file, where our square is stored in the following format:
    
    * the square array's size is in line 1;
    * array elements are in consequent lines, one element per line;
    * the order of elements corresponds to moving row-wise through the array;

- The program opens a connection to the file and uses it to define the corresponding matrix. 

- The matrix is passed into `isMagicSquare()`, which evaluates whether the matrix is a magic square, returning 1 if it is and 0 otherwise. 


Further details regarding the code may be found in the comments contained in the source code files.
