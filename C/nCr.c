#include <stdio.h>

int fact(int i)
{
   int a =i;
   int k;
   int fact = 1;
   for (k = 1; k <= a; k++) {
      fact = fact*k;
   } 
   return fact;
}

void main()
{
   int n;
   int r;
   printf("n of nCr=");
   scanf("%d", &n);
   printf("r of nCr=");
   scanf("%d", &r);
   printf("%d\n", fact(n)/(fact(n-r)*fact(r)) );
}
