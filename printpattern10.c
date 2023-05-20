/*C program to print the following pattern:
**********
*********
********
*******
******
*****
****
***
**
*

*/
#include<stdio.h>
int main (void) {
   int i,j,n=10;               //Variable declaration
  for(i=1; i<=n; i++) {        //Logic for the structure of the pattern
      for(j=n; j>=i; j--) {    //Logic for the structure of the pattern
          printf("*");        
      }
    printf("\n");
   }
 return 0; 
}
