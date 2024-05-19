/*
Write a program Lbat asks the user to enter a value for x and Lben clisplays the value of the
following polynomial:
3x5 + 2x4 - 5x3 -x1-- + 7x - 6
Hint: C doesn't have an e;(ponentiation operator, so you'll need to multiply .1· by itself
repeatedly in order to con1pute lhe powers of x. (For example, x * x * xis x cubed.)
*/
/*

#include <stdio.h>
int main(void)
{
    float x; 
    float polynomial; 
     printf("Enter value of x: ");
  scanf("%f", &x);
    polynomial = (3*x*x*x*x*x) + (2*x*x*x*x) - (5*x*x*x) + (x*x) + (7*x) - 6;
    
    printf("vale of polynomial is: %.2f\n", polynomial); 
}
*/
#include <stdio.h>
int main(void)
{
    float x; 
    float polynomial; 
     printf("Enter value of x: ");
     scanf("%f", &x);
polynomial = (((((3*x + 2)*x - 5)*x + 1)*x + 7)*x - 6);
    
    printf("vale of polynomial is: %.2f\n", polynomial); 
}