#include<stdio.h>
#define MAX 20

//by using array
int main(){
	int arr[MAX];
    int start = 0, n, end, key, mid;
    printf("Enter the number of elements:");
    scanf("%d", &n);
	printf("Enter Element of an Array:");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter Search element:");
	scanf("%d",&key);
	while(start<end){
		mid=(start+end)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(key<arr[mid]){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
		
	}
	return -1;
    int bin;
	if(bin != -1){
		printf("Element found at Index %d",bin);
	}
	else{
		printf("Data is not Found");
	}
	
}


// int binarySearch(int ar[],int n,int key){
// 	int start = 0,end = n,mid;
// 	while(start<end){
// 		mid=(start+end)/2;
// 		if(ar[mid]==key){
// 			return mid;
// 		}
// 		else if(key<ar[mid]){
// 			end=mid-1;
// 		}
// 		else{
// 			start=mid+1;
// 		}
		
// 	}
// 	return -1;
// }

// int main(){
// 	int arr[10],key, n;
//   printf("Enter the number of elements:");
 //  scanf("%d", &n);
// 	printf("Enter Element of an Array:");
// 	for(int i=0;i<10;i++){
// 		scanf("%d",&arr[i]);
// 	}
// 	printf("Enter Search Key:");
// 	scanf("%d",&key);
// 	int bin = binarySearch(&arr,10,key);
// 	if(bin != -1){
// 		printf("Data is Found at Index no. %d",bin);
// 	}
// 	else{
// 		printf("Data is not Found");
// 	}
	
// }