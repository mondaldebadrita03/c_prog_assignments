/*C program to print the pattern given  below:
  1
  0 1
  1 0 1
  0 1 0 1
  1 0 1 0 1
  0 1 0 1 0 1
  */
#include <stdio.h>
int main(void)
{
  int n=6,i,j;                                      //Variable declaration 
  for(i=1; i<=n; i++){                              //Logic for structure
    for(j=1; j<=i; j++) {                           //Logic for structure
      if(j==i) {                                    //Logic for pattern
        printf("1");                                //Logic for pattern
      } else if(i%2==0&&j%2==0 ||i%2!=0&&j%2!=0) {  //Logic for pattern
        printf("1");
      } else {
        printf("0");
      }
    }
    printf("\n");
  }
  return 0;
}
