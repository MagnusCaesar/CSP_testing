#include <stdio.h>

void swap(int *a, int *b) {
   int temp = *a;
   *a = *b;
   *b = temp;
}

void bubble(int a[], int b) {
   int i;
   for (i = 0; i < b; i++) {
      print_str(a);
      for (b = 0; b < 5; b++) {
         if (a[b-1]<a[b]) 
            swap(&a[b-1],&a[b]);
      }
   }  
}

void print_str(int grade[]){
   int i;
   for (i = 0; i < 5; i++) {
      printf("%d\t", grade[i]);
   }
   printf("\n");
}

void main(){
   int grades[5] = {10, 29, 40, 23, 54};
   bubble(grades, 5);
   printf("your sorted grades: ");
   print_str(grades);
}
