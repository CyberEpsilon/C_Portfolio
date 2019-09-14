#include <stdio.h>

int main(void){
    float fahr, celsius; //declare float vars fahr and celsius
    int lower, upper, step; //declare int vars lower, upper and step 

    lower = 0; //set lower = to 0
    upper = 300; //set upper = to 300
    step = 20; //set step = to 20 

    fahr = lower; //store lower inside fahr; maintains current value of lower
    while (fahr <= upper){ //while current value of fahr is <= upper
        celsius = (5.0/9.0) * (fahr-32.0); //use fahr to cel conversion eq using floats
        //note that we do (5.0/9.0) since float division is more precise but can still be formatted as seen below
        //also (5/9.0) and (5.0/9) would produce the same result since there's at least one floating point number
        printf("%3.0f %6.1f\n", fahr, celsius);
        //%3.0 means 3 characters aligned right, but 0 digits after decimal point
        //%6.1 means 6 characters aligned right, but 1 digit after decimal point

        fahr = fahr + step; 
    }
}