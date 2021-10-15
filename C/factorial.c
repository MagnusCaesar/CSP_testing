#include <stdio.h>

void main()
{
   int a;
   int k;
   int fact = 1;
   scanf("%d", &a);
   for (k = 1; k <= a; k++) {
      fact = fact*k;
   } 
   printf("%d\n", fact);
}
