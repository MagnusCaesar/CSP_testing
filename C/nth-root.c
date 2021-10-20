#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int k;
float nth(float t)
{
   int i;
   float p = t;
   for (i = 1; i < k; i++) {
      t = p*t;
   }
   return t;
}

void main()
{
   printf("Input root's power(integer only)=");
   scanf("%d", &k);
   float a;
   printf("input the number to be rooted=");
   scanf("%f", &a);
   float h2 = a;
   float h1 = 0;
   float av=a;
   while (fabs(nth(av) -a) > 0.000001) {
      if ((nth(av))<a) {
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

