#include <stdio.h>
#include <math.h>

// gcd function prototype
int gcd(int a, int b);

int main(void){

  // declare two integers, for which we will compute the gcd
  int a, b;

  // ask user to provide two non-zero ints
  printf("Please enter two non-zero integers, separated by a space:\n");
  scanf("%d %d", &a, &b);

  // print the gcd of the two provided integers
  printf("The GCD of %d and %d is %d.\n", a, b, gcd(a, b));

  return(0);
}

int gcd(int a, int b){
  
  if (b == 0){ // check if the remainder was 0 in the last step
    
    return a; // if so, then we are done; return a, the gcd

  }else{

    /* else, proceed with the algorithm:
       1) divisor becomes the number being divided,
       2) remainder becomes the divisor */

    gcd(b, a % b);
  }
}

