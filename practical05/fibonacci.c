#include <stdio.h>

// prototype of function fib
void fib(int *pa, int *pb);

int main(void){

  // declare variables for user input, loop counter, 2 consecutive Fibonacci numbers
  int n, i, a = 0, b = 1;

  // get the user to input a value for n
  printf("Please input an integer greater or equal to zero: \n");
  scanf("%d", &n);

  // declare an array of size n + 1 to hold F_0, F_1, ..., F_n
  int series[n + 1];
  // set the first two elements to 0 and 1 
  series[0] = a; series[1] = b;
  // print the first two elements
  printf("%d %d ", a, b);

  // loop to complete the series and print the remaining elements
  for (i = 2; i < n + 1; i++){
    
    // change the r-values of a and b
    fib(&a, &b);
    // the r-value of b now corresponds to the next element in the sequence
    series[i] = b;
    // print this next element
    printf("%d ", b);
  }
  
  printf("\n");

  return(0);
}

// fib takes two memory addresses and changes the corresponding r-values; returns nothing
void fib(int *pa, int *pb){
  
  // *pa is the l-value for some variable a (similarly for *pb and b)
  // a <-> F_{n-2}; b <-> F_{n-1}
  
  // store F_{n-2} using an integer variable tmp
  int tmp = *pa;
  
  // the r-value of a is changed from F_{n-2} to F_{n-1}
  // the r-value of b is changed from F_{n-1} to F_{n-1} + F_{n-2} = F_n
  *pa = *pb; *pb = *pa + tmp;
}

