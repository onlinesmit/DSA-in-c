#include<stdio.h>

int main()
{
 // means if we give 123 then print sum (1+2+3=) 6

int n, sum=0, rem;
printf("Enter the number: ");
scanf("%d", &n);

while (n>0)
{
    rem = n%10;
    sum = sum + rem;
    n=n/10;
}
printf("The sum of each term is: %d", sum);

    return 0;
}