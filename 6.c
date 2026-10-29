#include <stdio.h>

struct Student
{
	  int roll;
	  int m1, m2, m3;
	  char name[30];
	  int total;
	  float per;
};

void main(){
	  int n;
	  printf("Enter number of Students: ");
	  scanf("%d",&n);
  
struct Student s[n]; 
for(int i = 0; i < n; i++){ 
  
  		printf("Enter Rollno for Student %d: ", i+1);
	    	scanf("%d", &s[i].roll);
		     printf("Enter Name of Student %d: ", i+1);
		      scanf("%s", &s[i].name);
		       printf("Enter Marks of 1st Subject: ");
		        scanf("%d", &s[i].m1);
		         printf("Enter Marks of 2nd Subject: ");
		          scanf("%d", &s[i].m2);
		           printf("Enter Marks of 3rd Subject: ");
		            scanf("%d", &s[i].m3);
	 
  s[i].total = s[i].m3 +s[i].m1 + s[i].m2;
		s[i].per = s[i].total/3.00;
		
	}
	  printf("\n--- Results ---\n");
	   printf("Roll\t");
      printf("Name\t");
       printf("Total Marks\t");
        printf("Percentage\t");
         printf("Result\n");
  
	for(int i = 0; i < n; i++)
	{
        	printf("%d\t", s[i].roll);
        	 printf("%s\t\t", s[i].name);
        	  printf("%d\t", s[i].total);
        	   printf("%.2f\t\t", s[i].per);
		if(s[i].per < 20)
	{
	   	  printf("FAIL\n");
		 }
		else if(s[i].per >= 20 && s[i].per < 40)
	{
		   printf("PASS\n");
	  	}
		else if(s[i].per >= 40 && s[i].per < 60)
	{
		   printf("FIRST CLASS\n");
	  	}
		else if(s[i].per >= 60)
	{
		   printf("DISTINCTION\n");
	  	}
  }
	
}
