#include <stdio.h>

void main()
{
   float a;
   int k;
   int i;
   printf("input the number to be powered=");
   scanf("%f", &a);
   printf("Input power(integer only)=");
   scanf("%d", &k);
   float p = a;
   for (i = 1; i < k; i++) {
      a = p*a;
   }
   printf("%f\n", a);
}
