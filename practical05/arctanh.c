#include <math.h>
#include <stdio.h>

// arctanh function prototypes
float arctanh1(float x);
float arctanh2(float x);

// declare globally such that we do not have to input delta as an argument
float delta;

int main(void){
  
  // counter for the loop
  int i; 

  // x: value at which arctanh is evaluated; arr1, arr2 store arctanh values for method 1 and 2, resp.;
  // abserr1 and abserr2 are the total absolute errors for the 2 methods (w.r.t. atanh() in math.h lib)
  float x, arr1[181], arr2[181], abserr1 = 0, abserr2 = 0;
  
  // ask user for delta input
  printf("Please enter a real positive number: \n");
  scanf("%f", &delta);

  // fill the arrays, print the absolute errors at each step, comparing against atanh()
  for (i = 0; i < 181; i++){
   
    // partitioning of the interval
    x = -0.9 + i * 0.01; 
    // evaluate arctanh at x using both methods and store in the arrays 
    arr1[i] = arctanh1(x); arr2[i] = arctanh2(x);
    // print the errors for both methods (to 10 s.d.)
    printf("%d. x = %f, fabs(arctanh1(x) - atanh(x)) = %2.10f, fabs(archtanh2(x) - atanh(x)) = %2.10f \n",\
	   i, x, fabs(arr1[i] - atanh(x)), fabs(arr2[i] - atanh(x)));
    // update the total absolute errors
    abserr1 += fabs(arr1[i] - atanh(x)); abserr2 += fabs(arr2[i] - atanh(x));
  }

  // print the total absolute errors
  printf("Total absolute error for Method 1 = %2.10f; total absolute error for Method 2 = %2.10f \n", abserr1, abserr2);

  return 0;
}

// using MacLaurin series
float arctanh1(float x){
  
  // declare and initialise sum, n and last term in the sum variables
  int n = 0;
  float sum = 0.0, term_n = x;
 
  // compare the last term to the threshold
  while (fabs(term_n) >= delta){

    // if last term not too small, add it to the sum, increase n and evaluate new last term
    sum += term_n; n ++;
    term_n = powf(x, (float) (2 * n + 1)) / ((float) (2 * n + 1)) ;
  }

  return sum;
}

// using natural logarithm fn
float arctanh2(float x){

  return 0.5 * ( logf(1.0 + x) - logf(1.0 - x) );
}

