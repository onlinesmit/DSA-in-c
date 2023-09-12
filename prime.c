#include<stdio.h>

int main()
{
    int i, n, count =0;
    printf("Enter the n: ");
    scanf("%d", &n);

    // i =2;
    // while (i<n)
    // {
    //     if(n%i==0){
    //         count ++;
    //     }
    // i = i+1;
    // }

    // if(count ==0)
    i =1;
    while (i<=n)
    {
        if(n%i==0){
            count ++;
        }
    i = i+1;
    }

    if(count ==2)
    printf("Prime: ");
    else
    printf("Not prime: ");
    return 0;
}