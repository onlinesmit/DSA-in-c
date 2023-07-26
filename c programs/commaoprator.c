#include<stdio.h>

int main(){
     
    int n, i, j, sum =0;
    printf("Enter the number of term is: ");
    scanf("%d", &n);

    for(i=0, j=n; i<=j; i++, j--){
        
        printf("i= %d  j= %d\n", i, j);
         
        
    }
    return 0;
}