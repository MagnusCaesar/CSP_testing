#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//main
void main()
{
   float a;
   scanf("%f", &a);
   float h2 = a;
   float h1 = 0;
   float av=a;
   while (fabs((av*av)-a) > 0.00001) {
      if ((av*av)<a) {
         h1=av; 
      }
      else {
         h2=av; 
      }
      av=(h1+h2)/2;
      printf("%f\t", h1);
      printf("%f\t", h2);
      printf("%f\n", av);
   }
   printf("Final answer = %f\n", av);
}

