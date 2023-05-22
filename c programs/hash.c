#include <stdio.h>

// int main()
// {
//     int size, i, indexes[3];
//     int keys[3] = {10, 11, 12};
//     printf("Enter the size of the Hash Table: ");
//     scanf("%d", &size);
//     int M = size;
//     for (i = 0; i < 3; i++)
//     {
//         indexes[i] = (keys[i] % M);
//     }
//     printf("\nThe indexes of the values in the Hash Table: ");
//     for (i = 0; i < 3; i++)
//     {
//         printf("%d ", indexes[i]);
//     }
//     return 0;
// }

void main()
{
    int status;
    int M, key, k;

    printf("Enter the size of the array: ");
    scanf("%d", &M);

    int hash_table[M] = {-1};
    do{
        printf("Key value: ");
        scanf("%d", &key);
    
        k = key%M;
        hash_table[k]= key;

         printf("\nDo you want to continue (press 0 for exit): ");
         scanf("%d", &status);
    }
    while (status!=0)
    
    //for printing...

    for(int i=0; i<M; i++){
        if(hash_table[i] != -1)
        printf("%d", hash_table[i]);
    }
    
}