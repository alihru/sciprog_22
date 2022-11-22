#include <stdlib.h>
#include <stdio.h>
#include "magic_square.h"

// In the "best" case, the supplied n was < 0 or n = 1, which would require const. number of flops, indpt of n, to determine that our "square" is not magic. => Big Omega (1)
// In the worst case, we would check that all column, row and diagonal sums are equal to M. There are n-1 additions per row/column/diagonal. => Big O (n^2)
// In the average case, ... .

int main(void){

    // the text file must have square matrix size in line 1 and all elements on separate lines, going row by row;
    FILE *f;
    // matrix size, 2D array, row and column counters 
    int n, ** matrix, i, j;
    // path name (from user input)
    char txt_file[100];

    // ask user for name of file, containign our square matrix 
    printf("Please enter the name of the file: \n");
    scanf("%s", txt_file);

    // open the connection 
    f = fopen(txt_file, "r");
    
    // exit if cannot open file
    if (f == NULL){
        printf("! can't open file !\n");
        exit(1);
    }

    // read in the matrix size from the first line
    fscanf(f, "%d\n", &n);

    // create array of integer pointers
    matrix = malloc(n * sizeof(int *)); 

    for (i = 0; i < n; i++){
        
        // allocate memory for array, representing row i
        matrix[i] = malloc(n * sizeof(int));

        for (j = 0; j < n; j++){
            
            // flush inout stream 
            fflush(f);

            // read in the next element
            fscanf(f, "%d\n", &matrix[i][j]);
        }
    }

    // close file connection
    fclose(f);

    // print 1 if matrix is a magic square and 0 otherwise
    printf("%d \n", isMagicSquare(matrix, n));

    // free the allocated memory we no longer need
    free(matrix); matrix = NULL;

    return 0;
}


