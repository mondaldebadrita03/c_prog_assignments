/* C program to print the following pattern:
1111111111
222222222
33333333
4444444
555555
66666
7777
888
99
10
*/


#include <stdio.h>

int main(void)
{
    /*Variable declaration and definition*/
    int i,j,n=10; 
    for(i=1; i<=n; i++){         //Logic for structure
        for(j=i; j<=n; j++) {   //Logic for structure
            printf("%d",i);    //Logic for pattern
        }
        printf("\n");
    }
    return 0;
}
