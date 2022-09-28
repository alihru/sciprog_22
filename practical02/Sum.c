#include <stdio.h>


int main(void) {
/* Declare variables */
   int i;
   float sum1, sum2, diff;
   

/* First sum */
   sum1 = 0.0; 
   for (i=1; i<=1000; i++) {
     sum1 = sum1 + 1.0 / i; /* 0 + 1/1 + 1/2 + 1/3 + ... + 1/1000 */
   }


/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) { /* 0 + 1/1000 + 1/999 + ... + 1/1 */
     sum2 = sum2 + 1.0 / i;
   }

   printf(" Sum1=%f\n",sum1); /* Print the 2 sums */
   printf(" Sum2=%f\n",sum2);

/* Find the difference */
   diff = sum1 - sum2;
 /* We expect the difference to be non-zero due to the rounding off in finite precision floating point number systems */

   printf(" Difference between the two is %f\n",diff);

}
