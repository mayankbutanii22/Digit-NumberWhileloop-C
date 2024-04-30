#include<stdio.h>
main()
{
   int a; 
   int count=0;  
   printf("Enter any number: ");  
   scanf("%d",&a);  
   while(a!=0)  
   {  
       a=a/10;  
       count++;  
   }  
     
   printf("\nTotal number of digits: %d",count); 	
}