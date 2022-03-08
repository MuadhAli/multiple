#include <stdio.h> 
int main() 
{ 
 int i,n;
 int count=0; 
 char string[50]; 
 printf("Enter Your Name - "); 
 scanf("%s",string); 
 printf("how many times do you want:");
 scanf("%d",&n);
 for (i=1;i<=n;i++) 
 { 
 printf("\n%s",string);
 count++;

 } 
 printf("\n the string  %s printed is %d times",string,count);
 return 0; 
} 