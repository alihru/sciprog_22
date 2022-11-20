# Practical 10

This practical focuses on the Hanoi Towers problem, where one wants to move $n$ disks fo different sizes from one rod to another rod in a minimum number of moves. A third rod is present, which can be used in the process. The rules are as follows: 

- only one disc can be moved at a time,
- no larger disk can go on top of a smaller disc.

This repository contains 2 files:

- `hanoi_towers.c` - asks the user to provide the number of disks on the target rod, after which recursive function `move_disks()` is called to recursively move disks from the source rod "A" to the target rod "C";
- `move_disks.h` - contains declaration and definition of recursive function `move_disks()`;


Before compiling and running the program, one need to make sure that all files are within the same directory, which is set as the working directory.

In order to compile the files, we can use the GNU compiler on our machine as follows to create an executable, named `hanoi_towers`:

```
gcc hanoi_towers.c -o hanoi_towers -lm
```

The `-lm` option is needed to link the program with the `math` library, in order to calculate the number of steps taken in moving the rods. We can then run the program as follows:

```
./hanoi_towers
```

Further details regarding the code may be found in the comments contained in the source code files.
