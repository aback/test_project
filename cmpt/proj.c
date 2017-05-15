#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <unistd.h>
 
int main( void )
{
  float f = 0;
  int scanfReturnValue = 0;

  if (!feof(stdin)) { 
     printf("Enter a floating value: ");
  }

  while (true) {
     scanfReturnValue = scanf("%f", &f); 
     if (scanfReturnValue == EOF) {
         break;
     }
     printf("%d  %d %d\n", (int)floor(f), (int)round(f), (int)ceil(f));
  }

  printf("Done.\n");

  return 0;
}
