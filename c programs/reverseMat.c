#include<stdio.h>
#define MAX 100

int main(){

    int n,i,j,temp, arr[MAX];
    printf("Enter the value of matrix: \n");
    scanf("%d",&n);

    printf("Enter the numbers in array: ");

        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]); 
        }
    //int j;
        for(int i=0, j=n-1; i<j; i++, j--)
         
        {
           //int temp;
           temp = arr[i];
           arr[i]= arr[j];
           arr[j]=temp;
        }
        printf("After reverse: ");
            for(int i=0; i<n; i++)
            printf("%d ", arr[i]);
        return 0;
}
