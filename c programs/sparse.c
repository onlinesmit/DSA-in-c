#include<stdio.h>

#include<stdio.h>
#define MAX 10
int main()
{
    int arr[MAX][MAX]; 
    int i, j, r, c, totel, count=0;
    float per;

    printf("Enter the number of row and colum: ");
    scanf("%d %d", &r, &c);

    printf("Enter the matrix elements: ");
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){

                scanf("%d", &arr[i][j]);
                if(arr[i][j]==0){
                    count++;
                }
            }
        }
    // printf("Display the matrix elements: \n");
    //     for(i=0; i<r; i++){
    //         for(j=0; j<c; j++){

    //             printf("%d ", arr[i][j]);
    //         }  }
    
    // for(i=0; i<r; i++){
    //     for(j=0; j<c; j++){
    //         if(arr[i][j]!=0){
    //             count++;
    //             }
    //         }
    //     }
    //        printf("\n");
      
    printf("\n The no. of non-zeros elements is/are: %d", count);

    totel = r*c;
    printf("\n Totel number of elements is: %d", totel);
    per =(float)count/totel*100;
    printf("\n Persentage of non-zero elements is: %f",per);
    // if(per<25){
    //     printf("\n The given matrix is sparse matrix");
    // }
    // else{
    //     printf("\n The given matrix is not a sparse matrix");
    // }
    
    if(per>75){
        printf("\n The given matrix is sparse matrix");
    }
    else{
        printf("\n The given matrix is not a sparse matrix");
    }
    return 0;
}