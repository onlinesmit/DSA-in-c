#include<stdio.h>
//#define MAX 10
int main(){
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    //printf("Enter the number of rows & column: ");
    //scanf("%d %d", &r, &c);
    int arr[n][n];
    int i, j, flag=0;

    printf("Enter the matrix: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Display the matrix: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
                if( i<j && arr[i][j] == 0) //or if( i<j && arr[i][j] != 0)
                flag = 1; 
        }
    }
         if(flag==1) //if(flag==0)
         {
            printf("The given matrix is lower triangular matrix !!");
            }
            else{
            printf("The given matrix is not lower triangular matrix !!");
            }
    return 0;
}