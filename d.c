#include <stdio.h>

int main() {
         int n,fac=1;
         printf("Enter your choice number: ");
         scanf("%d" , &n);
         for(int i= n; i>0; i++)
    {
            fac *= i;
       }
         printf("factorial is %d\n ",fac);
         return 0;
   }
