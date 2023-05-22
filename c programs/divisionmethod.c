#include<stdio.h>

int main(){
	int status,M,key,K,search;
	printf("Enter the size of an array:");
	scanf("%d",&M);
	int hash_table[M];
	do{
		printf("Enter key value:");
		scanf("%d",&key);
		K=key%M;
		//
		//
		// here write the code of collisio
		//
		//
		hash_table[K]=key;
		printf("If do you want to exit then press zero otherwise press any key for continue:");
		scanf("%d",&status);
	}while(status!=0);
	// display the data
	for(int i=0;i<M;i++){
		if(hash_table[i]!=0){
			printf("%d\n",hash_table[i]);
		}
	}
	//search the data
	printf("Enter the search value:");
	scanf("%d",&search);
	int index = search%M;
	printf("%d",hash_table[index]);
	return 0;
}