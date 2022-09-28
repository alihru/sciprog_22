
#include <math.h>
#include <stdio.h>

int main(void){

  /* a: start point of interval; N: number of gaps between points */
  int a = 0, N = 12, i; 
  float b = M_PI / 3, sum, dist, area, diff; /* b: end point of interval, 
					        sum: sum within brackets in approx-n, 
					        dist: distance between any 2 points,
					        area: approximated area under curve, 
					        diff: absolute difference between log(2) 
					              and area*/

  /* sum the two tan values for the end points*/
  sum = tan(a) + tan(b);  

  /* distance between points*/
  dist = b / N;

  /* for loop to evaluate add the contibutions at 11 points to our sum*/
  for (i = 1; i <= 11; i++){ 
    
    /* contribution at x_i is 2 * tan(x_i) */
    sum += 2 * tan(dist * i);  
  }
  
  /* multiply the resulting sum by the constant */
  area = sum * ((b - a) / (2 * N)) ;
  printf("approximated area: %f \n", area);
  
  /* find the absolute difference between log(2) (the analytical solution)
     and the approximated area*/
  diff = fabs(log(2) - area);
  printf("absolute difference between approx-d area and log(2): %f \n", diff);

  return(0);
}
