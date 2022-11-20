#include <stdio.h>
#include <math.h>
#include "move_disks.h"

int main(void){

    int n; 

    // ask the user to provide the number of disks
    printf("How many disks? \n");
    scanf("%d", &n);

    // print the steps in order
    move_disks(n, 'A', 'C', 'B');   

    // the total number of moves is 2^n - 1
    printf("\nTotal number of moves: 2^%d - 1 = %d\n", n, (int) pow((double) 2, (double) n));

    return 0;
}


