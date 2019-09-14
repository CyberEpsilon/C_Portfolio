#include <stdio.h>
#define LOWER 0   //This is a symbolic constant denoted by the define keyword
#define UPPER 300
#define STEP 20


int main(void){
    int fahr;
    for (fahr=0; fahr <= 300; fahr+=20){
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    //Print in reverse order 
    printf("\nThe Fahren to Cel Table in Reverse Order\n");
    for(fahr=300; fahr>=0; fahr-=20){
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    printf("\nFahren to Cel Using Symbolic Constants\n");
    for(fahr=LOWER; fahr<=UPPER; fahr+=STEP){
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}
