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

struct matrix matmult(struct matrix * A, struct matrix * B){
  
  // declare matrix C
  struct matrix C;
  // initialise its number of rows to that of A and number of columns to that of B;
  // initialise all values to 0
  C.nrow = (*A).nrow; C.ncol = (*B).ncol; C.data[0][0] = 0;

  for (i = 0; i < (*A).nrow; i++){
    for (j = 0; j < (*A).ncol; j++){
      for (k = 0; k < (*B).ncol; k++){
	// fill the entries one-by-one according to the matrix multiplication formula
        C.data[i][k] += (*A).data[i][j] * (*B).data[j][k];
      }
    } 
  }
  
  return C;
}


