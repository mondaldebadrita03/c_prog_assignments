/* C program to print the following pattern
10
9 9
8 8 8
7 7 7 7
6 6 6 6 6
5 5 5 5 5 5
4 4 4 4 4 4 4
3 3 3 3 3 3 3 3
2 2 2 2 2 2 2 2 2
1 1 1 1 1 1 1 1 1 1
*/
#include<stdio.h>
int main(void) {
    int n=10,i,j;                   //variable declaration
    for(i=1; i<=n; i++) {           //logic for structure
        for(j=1; j<=i; j++) {       //logic for structure
            printf("%d ", n-i+1);   //logic for the pattern
        }
        printf("\n");
    }
    return 0;
}