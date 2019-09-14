#include <stdio.h>
//This program counts the number of characters unless 

int main(){
    long nc;

    nc = 0;
    while (getchar() != EOF){
        ++nc; 
    }
    printf("%ld\n", nc);

}