#include <stdio.h>
int main(){
int n;
      printf("Enter number of student: ");
      scanf("%d", &n);
      for(int i=0; i=n; i++){
      int sub[5] , mks=0;
      for(int j=0; j<5; j++)
     
    {
      printf("Enter sub%d: ", j+1);
      scanf("%d", &sub[j]);
      mks += sub[j];
    }
      float percent = (float) mks/5;
      printf("--Marksheet--\n");
      for(int j=0; j<5; j++)
    {
     printf("sub%d = %d\n", j+1, sub[j]);
    }
     if (percent >= 40)
    {
     printf("Result: PASS!!!\n");
    }
     else
    {
     printf("Result: FAIL!!!\n");
    }
    }
     return 0;
    }        
