#include <stdio.h>

int q10();
int r10();
int q;
int r;
int b=0;

void main()
{
   int a;
   scanf("%d", &a);
   q=a;
   while (q!=0)
   {
      r=q%10;
      q=q10(q);
      b=(10*b)+r;
   }
   printf("%d\n", b);
}

int q10(int x)
{
   int s=x/10;
   return s;
}
