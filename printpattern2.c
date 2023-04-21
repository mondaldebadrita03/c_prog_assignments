/* C program to print the following pattern:
0
1 1
2 2 2
3 3 3 3
4 4 4 4 4
5 5 5 5 5 5
6 6 6 6 6 6 6
7 7 7 7 7 7 7 7
8 8 8 8 8 8 8 8 8
9 9 9 9 9 9 9 9 9 9
*/
#include<stdio.h>
int main(void) {
    int n=10, i , j;               // variable declaration
    for(i=1; i<=n; i++) {          //logic for the structure
        for(j=1; j<=i; j++) {      //logic for the structure
            printf("%d",i-1);      //logic for the pattern
        }
        printf("\n");
    }
    return 0;
}