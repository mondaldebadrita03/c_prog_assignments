/* Menu driven C Program to calculate the area of circle and triangle*/
#include<stdio.h>
#include<math.h>
int main(void) {
    //declaration
    int i,r,b,h,x,y,z;
    double aoc,aot1,s,m,aot2;
    //menu for the user
    printf("* * * * * * * * * * * * * * * * * * * * * * * * *");
    printf("\n                    MENU                         ");
    printf("\n*************************************************");
    printf("\nFor calculating Area of a circle press 1"); 
    printf("\nFor calculating Area of a triangle using base and height press 2"); // #Approach 1
    printf("\nFor calculating area of a triangle using three sides press 3");    //  #Approach 2
    printf("\nEnter your choice:\t");                                           //Asking the user for his/her choice
    scanf("%d",&i);                                                            //Taking input for further execution
    switch(i) {
        case 1:
        printf("Enter the radius of the circle\n");
        scanf("%d",&r);                                                      //r=radius
        aoc=3.14*r*r;                                                        //Formula for area of circle(aoc)
        printf("\nHence, the area of the circle is %lf square units approx." ,aoc);
        break;

        case 2:
        printf("Enter the base and height of the triangle respectively\n"); //#approach 1
        scanf("%d %d",&b,&h);                                              //b=base and h=height    
        aot1=(b*h)/2;                                                     //Formula for area of triangle using approach 1(aot1)
        printf("\nThe area of the triangle is %lf square units approx.",aot1);
        break;

        case 3:
        printf("Enter the three sides of the triangle respectively\n");   //#approach 2
        scanf("%d %d %d",&x,&y,&z);                                      //x,y,z are the sides of the triangle
        s=(x+y+z)/2;                                                    //s= semi perimeter         
        m=(s)*(s-x)*(s-y)*(s-z);                                       //assuming the calculation under root as m
        aot2=sqrt(m);                                                 //Formula for calculating area of triangle using approach 2(aot2)
        if(m<=0) {                                                   //under sqrt,negative value evaluation is impossible
            printf("The area cannot be calculated, since area can't be zero or negative");
        } else {
           printf("\nThe area of the triangle is %lf square units approx.",aot2);
        }                         
        break;

        default:
        printf("Invalid input!!! \nTry again with a valid input\n*************************************************");
    }
    return 0;

}