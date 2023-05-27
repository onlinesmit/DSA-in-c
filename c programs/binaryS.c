#include<stdio.h>
#define MAX 20
 
int binarySearch(int ar[],int n,int key){
	int start = 0,end = n-1,mid;
	while(start<=end){
		mid=(start+end)/2;
		if(ar[mid]==key){
			return mid;
		}
		else if(key<ar[mid]){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
		
	}
	return 0;
}

int main(){
	int arr[MAX],key, n;
  printf("Enter the number of elements:");
  scanf("%d", &n);
	printf("Enter Element of an Array:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter Search Key:");
	scanf("%d",&key);
	int bin = binarySearch(arr,n,key);
	if(bin != 0){
		printf("Data is Found at Index no. %d",bin);
	}
	else{
		printf("Data is not Found");
	}
	
}