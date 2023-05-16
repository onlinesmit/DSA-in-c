#include<stdio.h>
#define MAX 100

int main(){
    int arr[MAX], i, j, temp, n;
    printf("Enter the number of term: ");
    scanf("%d", &n);

    printf("Enter the values of array: ");
    for(i=0; i<n; i++)
    {
        scanf("\n%d", &arr[i]);
    }
    temp = arr[0];
    for(i=1; i<n; i++)
    {
        if(temp<arr[i])

            temp = arr[i];
    }
    printf("max is: %d", temp);

    return 0;
}