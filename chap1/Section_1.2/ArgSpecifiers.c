#include <stdio.h>


int main(void){
    int myInteger = 29;
    float myFloat = 5;
    char myChar = "C";
    char myOtherChar = "A";

    //print the numbers
    printf("Integer Output\n");
    printf("%d\n" , myInteger); //print as decimal integer aligned left
    printf("The line is: %6d\n", myInteger); //print as decimal int, at least 6 chars wide
    printf("%18.5d\n", myInteger); 
    //For %d format, the format is [number of characters aligned left][.][zero padding from the left (not num of zeros)]
    printf("\nFloats Output:\n");
    printf("%f\n", myFloat);//Note that printing as %f always yields 6 digits after dec
    printf("%.2f\n", myFloat); //print 2 characters after the decimal point
    printf("%6.2f\n", myFloat);//print 2 chars after decimal pt and 6 chars aligned left

    printf("\nHexadecimal Numbers:\n");
    printf("%x\n", myInteger);
    printf("%x\n", myFloat);
    printf("%x\n", myChar);
    printf("%x\n", myOtherChar);

    printf("\nConversions:\n");
    //printf("%f\n", myInteger); //convert int to float
    printf("%f\n", myFloat);//will the int convert to a float 
    //printf("%c\n", myInteger);//will the  int  convert to char
    //printf("%c\n", myFloat); //will the float convert to char 
}
