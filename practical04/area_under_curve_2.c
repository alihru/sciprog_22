# include <stdio.h>
# include <math.h>
# define MAXSIZE 100

// function prototypes 
float degtorad(float arg), areaundercurve(int n);

// counter and number of points
int i, n = 13;

// angle range [a, b] and array to store tan values of n points
float a = 0, b = 60, tanangs[MAXSIZE];

int main(void){

  // degree and radian angles
  float degang, radang;
  
  // print the array 
  printf("Array of tan values: ");
  
  // loop to calculate the tan values
  for (i=0; i < n; i++){

    // angle in degrees
    degang = i * (b / (n - 1));
    // convert angle in degrees to radians
    radang = degtorad(degang);
    // initialise array values to tan values in order
    tanangs[i] = tanf(radang);
    // print the current tan value
    printf("%2f ", tanangs[i]);
  }
  
  // print the approximated area
  printf("\nArea: %2f \n", areaundercurve(n));

  return(0);
}

// function to convert angle size from degrees to radians
float degtorad(float degang){
  
  // M_PI is the pi value from the math library
  return((M_PI * degang) / 180.0);
}

// function to approximate area under curve using the trapezoidal rule
float areaundercurve(int n){
  
  // sum for the trapezoidal rule and approximated area
  float sum, area;
  
  // reassign for convenience
  n = n - 1;
  
  // add first and last terms in approximation
  sum = tanangs[0] + tanangs[n];

  // add the terms corresponding to the remaining points
  for (i = 1; i < n; i++){
    
    sum += 2 * tanangs[i];
  }

  // scale the sum appropriately
  area = sum * ((degtorad(b) - degtorad(a))/ (2 * n));

  return(area);
}
