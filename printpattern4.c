/* C program to print the following pattern
A
A B
A B C
A B C D
A B C D E
A B C D E F
A B C D E F G
A B C D E F G H
A B C D E F G H I
A B C D E F G H I J
*/
#include<stdio.h>
#include<stdlib.h>
int main(void) {
    int n,i,j;                            //variable declaration
    char c=64;                            //variable declaration
    printf("Enter the number of rows");   //taking no. of rows in input
    scanf("%d",&n);
    if(n>26) {
        printf("Invalid Input");          //Since,such pattern should not have characters rather than English alphabets in upper case
        exit(0);
    }else{
    for(i=1; i<=n; i++) {                 //logic for structure
        for(j=1; j<=i; j++) {             //logic for structure
            printf("%c ", c+j);           //logic for the pattern
        }
        printf("\n");
    }
  }  
    return 0;
}
