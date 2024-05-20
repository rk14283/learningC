#include <stdio.h>
/*
int main (void)
{
printf("%6.2g", .0000009979);
}
*/

/*2.
Write calls of printf that display 
a float variable x in the following formats.*/

/*(a) Exponential notation; 
left-justified in a field of size 8: one digit after the decimal point.*/
int main(void) {
    printf("%e", 3.14e2);
}