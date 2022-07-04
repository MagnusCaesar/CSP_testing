#include <stdio.h>

int i;
int o = 1;
int t = 2;
int e;
int k=0;

int main()
{
   for (i = 0; o < 4000000; i++) {
      printf("%d\t", o);
      e = o + t;
      o = t;
      t = e;
      if (o%2==0) {
         k=k+o;
      }
   }
   printf("\n\n%d\n", k);
   return 0;
}
