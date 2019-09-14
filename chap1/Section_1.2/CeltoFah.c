#include <stdio.h>
/*
This program will print out a conversion table from Celsius to Fahrenheit using type
specifiers and a heading for the table
 */

int main(void){
    float fahr, celsius;
    int lower, upper, step; //lower and upper will set our range 
    lower = 0;
    upper = 200;
    step = 10; 

    celsius = lower;
    printf("\tCelsius to Fahrenheit Table\n");
    while (celsius <= upper){
        fahr = celsius * (9.0/5.0) + 32 ;
        printf("%3.2f degrees Celsius\t=\t%3.2f degrees Fahrenheit\n", celsius, fahr);
        celsius+=step;
    }
}
