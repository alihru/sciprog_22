#include <stdio.h>
#include <stdlib.h>

// function prototypes:
// reserve a memory block of appropriate size for an array;
int *allocatearray(int n);
// fill an array of size n with ones;
void fillwithones(int *ap, int n);
// print an int array of size n; 
void printarray(int *ap, int n);
// free the allocated memory;
void cleanup(int **pp);

int main(void){

    // n: size of array; *ap: pointer to int array;
    int n = 15, *ap;

    // allocate a memory block to int array of size n;
    ap = allocatearray(n);
    // fill the entire array with ones;
    fillwithones(ap, n);
    // print the array;
    printarray(ap, n);
    // free the allocate memory;
    cleanup(&ap);

    return 0;
}

// n: int array size;
int *allocatearray(int n){
    // declare int (array) pointer;
    int *ap;
    // reserve a memory block of sufficient size; 
    ap = (int *) malloc(n * sizeof(int));
    // return the pointer to the array;
    return (ap);
}

// *ap: int array pointer; n: the array's size; 
void fillwithones(int *ap, int n){
    //declare counter;
    int i;
    // change every element to 1 via the for loop;
    for (i = 0; i < n; i++){
        ap[i] = 1;
    }
}

// *ap: int array pointer; n: the array's size; 
void printarray(int *ap, int n){
    // declare counter;
    int i;
    // print every element in turn via the for loop;
    for (i = 0; i < n; i++){
        printf("%d ", ap[i]);
    }
    printf("\n");
}

// **pp: pointer to an int pointer (in our case pointer to an int array pointer);
void cleanup(int **pp){
    // free the allocated memory
    free(*pp);
    // set the memory address to NULL;
    *pp = NULL;
}
