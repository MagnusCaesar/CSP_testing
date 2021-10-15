#include <stdio.h>
#include <stdlib.h>

//main
void main()
{
   float a;
   scanf("%f", &a);
   float h2 = a;
   float h1 = 0;
   float av=a;
   while (abs((av*av)-a)>0.0001) {
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
   printf("%f\n", av);
}

