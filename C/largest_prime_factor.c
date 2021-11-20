#include <stdio.h>

long long int p;
long long int i;

int main()
{
   scanf("%lld", &p);
   if (p<0) {
      printf("Composite(go figure)\n");
   }
   else if (p==1 || p ==0) {
      printf("Yes, you are smart, I accept defeat\n");
   }
   else {
      for (i = p/9; i > 2; i--) {
         if (p%i==0) {
            printf("Composite\n");
            printf("%lld\n", i+1);
            return 0;
         }
      } 
   }
}
