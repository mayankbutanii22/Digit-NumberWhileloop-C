#include<stdio.h>
int main()
{
    int a, sum=0, firstdigit, lastdigit;
    printf("Enter any number: ");
    scanf("%d", &a);
   
    lastdigit=a%10;
   
    while(a>=10)
    {
        a=a/10;
    }
    firstdigit=a;
    sum = firstdigit + lastdigit;
    printf("The sum of the first and the last digit: %d", sum);
}