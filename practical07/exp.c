#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){

    // i: counter; n: polynomial order;
    int i, n;
    // *arr: double array pointer; x: function input; 
    double *arr, x; 
    
    // ask the user to input a polynomial order;
    printf("Please enter polynomial order n (1 <= n):\n");
    scanf("%d", &n);
    printf("Please enter any real number x, at which you wish to evaluate exp(x) :\n");
    scanf("%lf", &x);

    /* dynamically allocate an array of type double which stores the the
    term for each power of x separately; */
    arr = (double *) malloc(n * sizeof(double));
    arr[0] = 1.0 + x;

    // compute the estimates for polynomial order <= n;
    for (i = 1; i < n; i++){
        // print the polynomial order, estimate and error for last iteration;
        printf("Polynomial order: %d; estimate of exp(x): %lf; absolute error: %lf; \n", 
                i, arr[i - 1], fabs(arr[i - 1] - exp(x)));
        // compute the estimate corresponding to polynomial order i + 1;
        arr[i] = arr[i - 1] +  (pow(x, i + 1) / tgamma(i + 2)); 
    }
    // print the polynomial order, estimate and error corresponding to user's input;
    printf("Polynomial order: %d; estimate of exp(x): %lf; absolute error: %lf; <<< User's estimate \n", 
            i, arr[i - 1], fabs(arr[i - 1] - exp(x)));

    // free allocated memory;
    free(arr); arr = NULL;
    
    return 0;
}

/* 
Q: Something strange happens with the higher order polynomials the estimate gets worse, 
why is that?

A: When we compare absolute errors for high polynomial orders and small input values vs.
those for same polynomial orders and higher (in magnitude) input values, we see that 
the errors tend to be higher. This is due to the upper bound of the (absolute) truncation
error of Taylor series expansion of exp(x) being an increasing function in x. This explains 
why the absolute error increases as x increases for the same polynomial orders, as the higher
upper bound on the error allows more flexibility. 
*/