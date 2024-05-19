/*I.
Write a progra,n that uses printf 
to display the following picture on the screen;
Image on page 34
8 stars to make a tick 
*/
/*
#include <stdio.h>
int main (void){
    printf("            *     \n");
    printf("           *      \n");
    printf("          *       \n");
    printf("    *    *       \n");
    printf("     *  *       \n");
    printf("       *         \n");

return 0;
}
*/
/*
Write a program that computes the volume of a sphere with a 10-meter radius, using the for-
mula v = 4/3n,.3. Write the fraction 4/3 as 4. Of/3. Of. (Try writing it as 4/3. What hap-
pens?) Hint: C doesn ·t have an exponentiation operator. so you'll need to ,multiply r by i1seJf
twice to co111pute r3(cube)?.
*/
/*This code can be made shorter*/
/*
#include <stdio.h>
int main (void){
    float result = 4.0f/ 3.0f;
    printf("The volume of cube is: %.2f" , (4.0f/ 3.0f) * (22.0f/7.0f) * (10*10*10));
   return 0; 
}
*/
/*My answer*/
/*
#include <stdio.h>
int main(void)
{
float dollars;
float cents; 
float amount;  
float tax =5.0; 
 printf("Enter dollar amount: ");
 scanf("%f", &dollars);

 printf("Enter cent amount: ");
 scanf("%f", &cents);

 amount = dollars + cents / 100.0f;  // Combine dollars and cents correctly
 tax = 5/100.0f * amount;    
  printf("Total amount: %.2f\n", amount);  // Print the result formatted to two decimal places
  printf("Total amount with tax added: %.2f\n", amount+tax);    
  return 0;

}
*/

/* Ideal answer*/

#include <stdio.h>

int main(void)
{
  float original_amount, amount_with_tax;

  printf("Enter an amount: ");
  scanf("%f", &original_amount);
  amount_with_tax = original_amount * 1.05f;
  printf("With tax added: $%.2f\n", amount_with_tax);

  return 0;
}
