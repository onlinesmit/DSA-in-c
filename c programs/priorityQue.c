#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int pqueue[MAX];
int priority[MAX]={-1,-1,-1,-1,-1};

int isFull(){
	for(int i=0;i<MAX;i++){
		if(priority[i]==-1)
	        return 1;
	}
	return 0;
}

int isEmpty(){
	for(int i=0;i<MAX;i++){
		if(priority[i]!=-1)
	        return 1;
	}
	return 0;
}

int peek(){
	int index=0,min;
	min=MAX;
	for(int i=0;i<MAX;i++){
		if(min>priority[i] && priority[i]!=-1){
			min=priority[i];
			index=i;
		}
	}
	return index;
}

int enQueue(){
	int i,p,n,status = isFull();
	if(status==0)
	   return 0;
	
	printf("Enter a Number:");
	scanf("%d",&n);
	printf("Enter Priority:");
	scanf("%d",&p);
	for(i=0;i<MAX;i++){
		if(priority[i]==-1){
			break;
		}
	}
	pqueue[i]=n;
	priority[i]=p;
	return 1;
}

int dQueue(){
	int index,status = isEmpty();
	if(status == 0)
	    return 0;
	index = peek();
	printf("Deleted Data = %d",pqueue[index]);
	pqueue[index] = 0;
	printf("\n index number  is %d",index);
	priority[index] = -1;
	return 1;
}

int traverse(){
	int i,status = isEmpty();
	if(status == 0)
	    return 0;
	printf("Data-->Priority\n");
	for(i=0;i<MAX;i++){
		if(priority[i]==-1)
		    continue;
		
		printf("%d  -->  %d\n",pqueue[i],priority[i]);
	}
	return 1;
}



int main(){
	int choice,status;
	while(1){
		printf("1. Insert:\n");
		printf("2. Delete:\n");
		printf("3. Traverse:\n");
		printf("4. Exit:\n");
		printf("Enter Your Choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				status = enQueue();
				if(status == 0){
					printf("Queue is Full:\n");
				}
				else{
					printf("Successfully Inserted:\n");
				}
				break;
			}
			case 2:{
				status = dQueue();
				if(status == 0){
					printf("Empty Queue:");
				}
				else{
					printf("Delete Successfully:\n");
				}
				break;
			}
			case 3:{
				status =  traverse();
				if(status == 0){
					printf("NO DATA\n");
				}
				else{
					printf("Data Print Successfully:\n");
				}
				break;
			}
			case 4:{
				exit(1);
				break;
			}
		}
	}
	return 0;
}