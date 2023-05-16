#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int cqueue[MAX];
int front=-1,rear=-1;

int isFull(){
	if(rear==MAX-1)
	    return 0;
	return 1;
}

int isEmpty(){
	if(rear==-1)
	    return 0;
	return 1;
}

int enQueue(){
	int n;
	if(front==0 && rear == MAX-1){
		return 0;
	}
	else if(rear==front-1){
		return 0;
	}
	printf("Enter a Number:\n");
	scanf("%d",&n);
	if(front==-1 || rear==-1){
		front++;
		cqueue[++rear]=n;
	}
	else if(front>0){
		rear=0;
	}
	else{
		cqueue[++rear]=n;
	}
	return 1;
}

int dQueue(){
	int status = isEmpty();
	if(status == 0){
		return 0;
	}
	front++;
	if(front==rear+1){
		front=-1;
		rear=-1;
	}
	
	return 1;
}

int traverse(){
	int status = isEmpty();
	if(status==0){
		return 0;
	}
	if(front<=rear){
		for(int i=front;i<=rear;i++){
			printf("%d\t",cqueue[i]);
		}
	}
	else{
		for(int i=front;i<=MAX-1;i++){
			printf("%d\t",cqueue[i]);
		}
		for(int i=0;i<=rear;i++){
			printf("%d\t",cqueue[i]);
		}
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
				printf("1");
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