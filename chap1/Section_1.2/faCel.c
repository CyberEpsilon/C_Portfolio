#include <stdio.h>

int main(void){
    int fahr, celsius; //declare int vars named fahr and celsius
    int lower, upper, step; //declare int vars named lower, upper, step

    lower= 0; //lower limit of temp table
    upper = 300; //upper limit of temp table
    step = 20; //step size

    fahr = lower; //store lower value into fahr
    printf("\tFahrenheit to Celsius Conversion\t\n");
    while(fahr <= upper){ //while current value of fahr is less than or equal to upper
        celsius = 5 * (fahr -32) / 9;//covert fahr to cel and store in celsius variable
        //5 must be * with (fahr-32) to avoid integer division which would be 0 if we do 5/9; 
        //Remember that integer division truncates 
        //printf("%d\t%d\n", fahr, celsius); //print a line that includes fahr then tab space then celsius then a newline gets started 
        printf("%3d %6d\n", fahr, celsius); //aligns output toward right
        //%3 means 3 digits wide before printing num , %6 means 6 digits wide before printing num 
        fahr = fahr + step; //increment the value for fahr by the next step 
    }
}
 /*
 Code notes:
 Variables: They must be declared with a type before they can be used
 16-bit ints: -32768 and +32767 
 32-bit int
 floats: 32-bits Range: 10^-38 and 10^+38

 Data types of C:
 char --character (1  byte)
 short --short integer
 long --long integer 
 double --double-precision floating point
 Arrays
 Structures
 Unions

 --> Statments in C source code end with ; 

 C programs disregard indentation, but using indentation is necessary for creating clean code


 SIZES ARE MACHINE DEPENDENT
  */