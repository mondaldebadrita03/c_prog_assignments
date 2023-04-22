/* C program to print the following pattern:
J
J I
J I H
J I H G
J I H G F
J I H G F E
J I H G F E D
J I H G F E D C
J I H G F E D C B
J I H G F E D C B A 
*/
#include<stdio.h>
int main(void) {
    int n=10,i,j;                     //Variable declaration
    for(i=1; i<=n; i++) {             //logic for the structure
        for(j=1; j<=i; j++) {         //logic for the structure
            printf("%c ", 65+n-j);    //logic for the pattern
        }
        printf("\n");
    }
   return 0; 
}