/* C program to print the following pattern:
9
9 8
9 8 7
9 8 7 6 
9 8 7 6 5
9 8 7 6 5 4
9 8 7 6 5 4 3
9 8 7 6 5 4 3 2 
9 8 7 6 5 4 3 2 1
9 8 7 6 5 4 3 2 1 0
*/
#include<stdio.h>
int main(void) {
    int n=10, i , j;
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            printf("%d",n-j);
        }
        printf("\n");
    }
    return 0;
}