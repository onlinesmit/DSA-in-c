#include<stdio.h>
#define MAX 100

int main(){
    int i, j, r, c;
    int count = 0;
    int spMatrix[MAX][MAX];

    printf("Enter the number of rows & column: ");
    scanf("%d %d",&r, &c);

    printf("Enter the sparse matrix: ");
        for ( i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
            scanf("%d", &spMatrix[i][j]);
            if(spMatrix[i][j]==0){
                count++;
                }
            }
        }
    printf("Display the given matrix: \n");
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                printf("%d ", spMatrix[i][j]);
            }
            printf("\n");
        }

    printf("Display the number of zeros: %d\n", count);

    int totel = r*c;
    int size = totel - count;
    int compMatrix[3][size];
    int row , col =0;

    printf("Display the size of compact matrix is: %d", size);

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            row = 0;
            if(spMatrix[i][j] != 0){
                compMatrix[row++][col] = i;
                compMatrix[row++][col] = j;
                compMatrix[row][col] = spMatrix[i][j];
                col++;
            }
        }
    }
    printf("\nThe generated compact matrix is: \n");
    for(i=0; i<3; i++)
        {
            for(j=0; j<size; j++)
            {
                printf("%d ", compMatrix[i][j]);
            }
            printf("\n");
        }

    return 0;
}