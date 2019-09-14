#include <stdio.h>

int main(){
    int c; 

    while ((c = getchar()) != EOF){
        if(EOF == 0){
            printf("We have not reached the end of file.");
            printf("%d", EOF);
        }
        else if(EOF == 1){
            printf("We have definitely reached the end of the file.");
            printf("%d", EOF);
        }
        putchar(c);
    }
}
