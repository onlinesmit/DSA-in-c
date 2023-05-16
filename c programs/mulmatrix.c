#include<stdio.h>
#define MAX 10
int main()
{
    int arr1[MAX][MAX], arr2[MAX][MAX], arrM[MAX][MAX]; 
    int i, j, k, r, c;

    printf("Enter the number of row and colum: ");
    scanf("%d %d", &r, &c);

    printf("Enter the first array elements: ");
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){

                scanf("%d", &arr1[i][j]);
            }
        }

    printf("Enter the second array elements: ");
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){

                scanf("%d", &arr2[i][j]);
            }
        }

    printf("Display the first entered array elements: \n");
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){

                printf("%d ", arr1[i][j]);
            }
            printf("\n");
        }

    printf("Display the second entered array elements: \n");
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){

                printf("%d ", arr2[i][j]);
            }
            printf("\n");
        }

    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            arrM[i][j] = 0;
            for ( k = 0; k < c; k++)
            {
                arrM[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("Multiplication of matrix is: \n");
        for ( i = 0; i < r; i++)
        {
            for ( j = 0; j < c; j++)
            {
            printf("%d ", arrM[i][j]);
            }
        printf("\n");
    }
    
    return 0;
}