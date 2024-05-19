/* Converts a Fahrenheit temprature to Celsius*/

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/ 9.0f)

int main(void)
{
    float fahrenheit, celsius; 
    printf("Enter Fahrenheit temprature: ");
    scanf("%f", &fahrenheit); 
    /* Converts Fahrenheit to temprature */
    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
     /* %.1f is to round up */ 
    printf("Celsius equivalent: %.1f\n", celsius); 
    return 0; 
}