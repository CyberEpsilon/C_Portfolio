#include <stdio.h>

void main(){
    int c; //variable declaration; needed in order to distinguish EOF value from a 
    //real character value; EOF is of type int; ints can also be used in place of char
    
    c = getchar(); //call function and store it into the variable c
    while (c != EOF){ //while loop initiated with test condition: c is not EOF character
        putchar(c); //call to putchar; store value in c into function; initate function putchar 
        //and print char value stored in c 
        c = getchar(); //read next character, return character, store it into C
    }
}

/*
Code Notes:
putchar() prints the character argument each time it is called
In this program, every character in the text stream (a sequence of characters divide into lines; each line consists of 0 or more characters 
followed by a newline character)
getchar() reads the next input character from a text stream and returns that as its value
When there is no value, EOF is returned

 */
