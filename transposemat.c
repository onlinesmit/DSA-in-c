#include<stdio.h>
//#define MAX 10
int main()
{
    int a[10][10];
    int i, j, r, c, temp;

    printf("Enter the number of row and colum: ");
    scanf("%d %d", &r, &c);

    printf("Enter the matrix: ");
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){

                scanf("%d", &a[i][j]);
            }
        }
        printf("Display the entered array: \n");

        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
            
            printf("%d ", a[i][j]);
            }
            printf("\n");
            }

        for(i=0; i<r; i++){
            for(j=0; j<c; j++){

                if(i<j){
                    temp = a[i][j];
                    a[i][j]=a[j][i];
                    a[j][i]=temp;
                }
            
                }
            }
        printf("Transpose is: \n");
            for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        return 0;
}