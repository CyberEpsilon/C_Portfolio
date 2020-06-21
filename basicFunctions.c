#include <stdio.h>

int main(){
    add(3,4);
    sub(10,3);
}

int add(int x, int y){
    printf("The sum is: %d\n", x + y); 

}

int sub(int a, int b){
    printf("The difference is:  %d\n", a - b);
}


