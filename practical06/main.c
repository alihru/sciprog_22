# include <stdio.h>

// define n, p, q as required and MAX for the max. number of rows and columns 
# define n 5
# define p 3
# define q 4
# define MAX 10

// matrix struct
struct matrix{
  // numbers of rows and columns, resp.
  int nrow, ncol;
  // array of reals
  double data[MAX][MAX];
};

// loop counter variables
int i, j, k;
// matrix printing function prototype
void printmat(struct matrix X);
// matrix multiplication function prototype
struct matrix matmult(struct matrix *A, struct matrix *B);

int main(void){
   
  // declare three matrices
  struct matrix A, B, C;
  
  // initialise row and column values of A and B
  A.nrow = n; A.ncol = p;
  B.nrow = p; B.ncol = q;
  
  // initialise A and B array values
  for (i = 0; i < A.nrow; i++){
    
    for (j = 0; j < A.ncol; j++){
     A.data[i][j] = i + j;

      for (k = 0; k < B.ncol; k++){
	B.data[j][k] = j - k;
      }
    }
  }

  // multiply A and B and initialise C
  C = matmult(&A, &B);

  // print the matrices
  printf("Matrix A: \n"); printmat(A); printf("\n"); 
  printf("Matrix B: \n"); printmat(B); printf("\n");
  printf("Matrix C (= AB): \n"); printmat(C); printf("\n");
}


void printmat(struct matrix X){
 
  // get row and column indices for (i, j)th entry of X
  for (i = 0; i < X.nrow; i++){
    for (j = 0; j < X.ncol; j++){
    
      // print the entry and 4 spaces
      printf("%.2f \t", X.data[i][j]);
    }
    
    // when the whole row is printed, go to a new line
    printf("\n");
  } 
}
