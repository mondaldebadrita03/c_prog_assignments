/* C program to print the following pattern:
A
B B
C C C
D D D D
E E E E E
F F F F F F
G G G G G G G
H H H H H H H H
I I I I I I I I I
J J J J J J J J J J
*/
#include<stdio.h>
int main(void) {
    int n=10,i,j;                //Variable declaration
    for(i=1; i<=n; i++) {        //logic for the structure
        for(j=1; j<=i; j++) {    //logic for the structure
            printf("%c ",64+i);  //logic for the pattern
        }
        printf("\n");
    }
   return 0; 
}