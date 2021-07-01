#include<stdio.h>
int main() {
   int a, b;
   scanf("%d", &a);
   for(b = 1; b <= a; b+=2){
      printf("%d", b);
   }

   printf("\n");

   return 0;
}