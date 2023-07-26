#include<stdio.h>

int main()
{
  //series is 1+2+4+7+11+16....

   int  n, i, sum=0, term =1;
    printf("Enter the no of term: ");
    scanf("%d", &n);

    printf("The series is: ");
    for(i=1; i<=n; i++){
        printf("%d ", term);

        sum = sum + term;
        term = term +i;
        
    }
    printf("\nSum of upto %d no. of random series is %d ", n, sum);

return 0;

}