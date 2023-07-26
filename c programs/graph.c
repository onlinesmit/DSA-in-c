#include<stdio.h>
#define MAX 10

void main(){

    int ad_mat[MAX][MAX], v;
    int i, j, s, d, t=1;

    for ( i = 0; i < MAX; i++)
    {
        for ( j = 0; j < MAX; j++)
        {
            ad_mat[i][j]=0;
        }
        
    }
    

    printf("Enter the number of vertices: ");
    scanf("%d", &v);

    while (t!=0)
    {
        printf("Enter the source and destination: ");
        scanf("%d %d", &s, &d);

        ad_mat[s][d] = 1;
        ad_mat[d][s] = 1;

       // scanf("%d", &t);
    }
    
    for ( i = 0; i < MAX; i++)
    {
        for ( j = 0; j < MAX; j++)
        {
            if (ad_mat[i][j]==1)
            {
            printf("%d -> %d ", i, j);                
            }
            
        }
        
    }
   // return 0;

}