#include <stdio.h>

int main(void){
  int c;
  for (int i = 0; i <= 10; i++){
     c = scanf("%c", &c);
  }
  //For the given int, while c is not the EOF int, use putchar to print each character it has as an argument
  while ((c = getchar()) != EOF){
	putchar(c);
  }	  
  printf("The result of getchar() != EOf is %d\n", (getchar() != EOF));
}
