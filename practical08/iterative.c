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
  
  // declare a temporary variable to store the divisor's value
  int temp;

  // Euclid's algorithm 
  while (b != 0){

    temp = b;
    b = a % b; // the remainder of division becomes the divisor for next division
    a = temp; // the divisor becomes the number being divided 
  }

  // return gcd(a, b)
  return a;
}
