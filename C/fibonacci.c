#include <stdio.h>

int i;
int o = 1;
int t = 2;
int e;

int main()
{
   for (i = 0; e < 4000000; i++) {
      printf("%d\n", o);
      e = o + t;
      o = t;
      t = e;
   }
   return 0;
}
