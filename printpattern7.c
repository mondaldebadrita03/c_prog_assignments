/* C program to print the following pattern:
J
I I
H H H
G G G G
F F F F F
E E E E E E 
D D D D D D D
C C C C C C C C
B B B B B B B B B
A A A A A A A A A A
*/
#include <stdio.h>
int main(void) {
    int i,j,n;                                 //Variable declaration
    printf("Enter the number of lines:\t");    //Asking for the input from the user
    scanf("%d",&n);                            //Taking input, for this particular problem, n=10
    for(i=1; i<=n; i++) {                      //logic for the structure
        for(j=1; j<=i; j++) {                  //logic for the structure
            printf("%c ", 75-i);               //logic for the pattern
        }
       printf("\n"); 
    }
   return 0; 
}