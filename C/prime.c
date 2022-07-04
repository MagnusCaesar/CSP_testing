#include <stdio.h>
#include <math.h>

long long int s,i,p;

int main()
{
   scanf("%lld", &p);
   s = sqrt(p);
   if (p<0) {
      printf("Composite(go figure)\n");
   }
   else if (p==1 || p ==0) {
      printf("Yes, you are smart, I accept defeat\n");
   }
   else {
      for (i = 2; i < s; i++) {
         if (p%i==0) {
            printf("Composite\n");
            return 0;
         }
      } 
      printf("Prime\n");
      return 0;
   }
}
