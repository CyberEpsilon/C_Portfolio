#include <stdio.h>

int main(void){
   int c;
   while ((c = getchar()) != EOF)
     putchar(c);
   printf("%d", (getchar() != EOF));
   printf("The value of EOF is %d", EOF);
}
