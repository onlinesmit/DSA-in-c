#include<stdio.h>
#define MAX 20

//by using array....

// int main() {
//   int arr[MAX], n, i, key;
//   printf("Enter the number of element: ");
//   scanf("%d", &n);

//   printf("Enter elements of the array: ");
//   for (i = 0; i < n; i++)
//     scanf("%d", &arr[i]);

//   printf("Enter the element to search: ");
//   scanf("%d", &key);

//   for (i = 0; i < n; i++)
//     if (arr[i] == key)
//       break;

//   if (i <n) 
//     printf("Element found at index %d", i);
//   else
//     printf("Element not found");

//   return 0;
// }


//by using function....

int linearSearch(int arr[], int n, int key) {
  int i;
  for (i = 0; i < n; i++)
    if (arr[i] == key) 
      return i;
  return 0;
}

int main() {

  int arr[MAX], n, key, i;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter elements of the array: ");
  
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("Enter the element to search: ");
  scanf("%d", &key);

  int lin = linearSearch(arr, n, key); 

  if (lin == 0)
    printf("Element not found");
  else
    printf("Element found at index %d", lin); 

  return 1;
}



