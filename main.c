#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int comp;

  srand(time(NULL));

  int x = rand() % 101;
 
  while(comp!=x)
  {
    printf("digite um numero entre 0 e 100\n");
    scanf("%i",&comp);
    if(comp > x)
    {
      printf("acima do valor\n ");
    }
    else if(comp < x)
    {
      printf("abaixo do valor\n");
    }
  }
  printf("acertou!! ");
  
  return 0;
}
