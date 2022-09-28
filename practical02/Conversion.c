#include <stdio.h>
#include <math.h>

int main(void) {

/* Declare variables */
   int i, inum, tmp, numdigits;
   float fnum;
   char binnum[60]; /* No strings in C, but rather character arrays, space reserved for 60 char-s */

/* Intialise 4-byte integer */
   inum = 33554431;
/* Convert to 4-byte float */
   fnum = (float) inum;


/* Convert to binary number (string)*/
   i = 0; tmp = inum;
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp % 2); /* Append the remainder of division by 2 to our array */
     tmp = tmp / 2; /* Integer division (remainder ignored) */
     i++; /* Position tracker */ 
/* Normally the resulting digit sequence need to be reversed, but this is a sequence of all once => symmetric */
   }

/* Terminate the string */
   binnum[i] = '\0'; /* All character arrays must end with nul */
       

/* Complete the expression */
   numdigits = ceil(log2f(fnum)); /* Number of times 2 divides into an integer + 1 */
   printf("The number of digits is %d\n",numdigits); /* since we have an extra digit for every division by 2 */



   printf("inum=%d,  fnum=%f, inum in binary=%s\n",
      inum,fnum,binnum);

}
