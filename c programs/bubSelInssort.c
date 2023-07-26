#include<stdio.h>
#define MAX 100

int main()
{
int arr[MAX], i, j, n;

printf("Enter the no. of elements: ");
scanf("%d", &n);

printf("Enter the elements: \n");
for ( i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}

printf("the elements is : \n");
for ( i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}

// bubbleSort(arr, n);
// printf("After sorted elements: ");
// for ( i = 0; i < n; i++)
// {
//     printf("%d", arr[i]);
// }

// selSort(arr, n);
// printf("After sorted elements: ");
// for ( i = 0; i < n; i++)
// {
//     printf("%d ", arr[i]);
// }

insSort(arr, n);
printf("After sorted elements: ");
for ( i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}

return 0;

}

// int bubbleSort(int arr[], int n)
// {
//     int i, j, temp;

//     for ( i = 0; i < n-1; i++)
//     {
//         for( j = 0; j < n-i-1; j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 temp = arr[j];
//                 arr[j]= arr[j+1];
//                 arr[j+1]= temp;
//             }       
//         }       
//     }
// return 0;
// }

// int selSort(int arr[], int n)
// {
//     int i, j, temp;
//     for ( i = 0; i < n; i++)
//     {
//         for ( j = i+1; j < n; j++)
//         {
//             if(arr[i]>arr[j]){
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }    
//     }  
//}

// int selSort(int arr[], int n)
// {
//     int i, j, temp, min;
//     for ( i = 0; i < n; i++)
//     {
 //           min = i;
//         for ( j = i+1; j < n; j++)
//         {
//             if(arr[j]<arr[min]){
                 //min = j;
               //  }
//                 temp = arr[i];
//                 arr[i] = arr[min];
//                 arr[min] = temp;
//             
//         }    
//     }  
//}


int insSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

         while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return 0;
}