/* C program to print the following pattern:
12345678910
123456789
12345678
1234567
123456
12345
1234
123
12
1
*/
#include <stdio.h>
int main(void)
{
    /*Variable declaration and definition*/
    int i,j,n=10; 
    for(i=1; i<=n; i++){             //Logic for structure
        for(j=i; j<=n; j++) {       //Logic for structure
            printf("%d",j-i+1);    //Logic for pattern
        }
        printf("\n");
    }
    return 0;
}
