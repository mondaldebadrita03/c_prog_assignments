/* C program to print the following pattern:
1
2 3
3 4 5
4 5 6 7
*/
#include<stdio.h>
int main(void) {
    int n,i,j;                                  //Variable declaration
    printf("Enter the number of lines: ");      //Asking for input
    scanf("%d",&n);                             //Taking input; for this given pattern, n=4
    for(i=1; i<=n; i++) {                       //Logic for the structure
        for(j=1; j<=i; j++) {                   //Logic for the structure
            printf("%d ",i+j-1);                //Logic for the pattern
        }
        printf("\n");
    }
  return 0;  
}