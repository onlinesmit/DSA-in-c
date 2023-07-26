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
    
   for(i=0; i<n; i++)
   {
    temp = arr[i];
    for(j=i+1; j<n; j++)
    {
        if(temp<arr[j])
        break; 
    }
     if(j==n)
        printf("Leader is : %d\n",arr[i]);
   }
    return 0;
}