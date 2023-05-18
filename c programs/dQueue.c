#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int dQueue[MAX];
int front = -1,rear = -1;

int isFull(){
	if(front==0 && rear==MAX-1)
	    return 0;
	return 1;
}

int isEmpty(){
	if(front==-1)
	    return 0;
	return 1;
}

int isFrontFull(){
	if(front==0)
	   return 0;
	return 1;
}

int insertFromFront(){
	int n;
	int status = isFrontFull();
	if(status == 0)
	   return 0;
	printf("Enter Data:");
	scanf("%d",&n);
	if(front==-1){
		dQueue[++front]=n;
		rear=0;
		return 1;
	}
	front--;
	dQueue[front]=n;
	return 1;	
}

int insertFromEnd(){
	int n,status = isFull();
	if(status == 0){
		return 0;
	}
	printf("Enter Data:");
	scanf("%d",&n);
	if(rear==-1){
		front=0;
		dQueue[++rear];
		return 1;
	}
	dQueue[++rear]=n;
	return 1;
}

int deleteFromFront(){
	int status = isEmpty();
	if(status==0)
	   return 0;
	printf("Deleted Element = %d\n",dQueue[front]);
	front++;
	if(front == rear+1){
		front=-1;
		rear=-1;
	}
	return 1;
}

int deleteFromEnd(){
	int status = isEmpty();
	if(status == 0)
	   return 0;
	printf("Deleted Data = %d\n",dQueue[rear]);
	rear--;
	if(rear==-1 || rear == front-1){
		front=-1;
	}
	return 1;
}

int traverse(){
	int status = isEmpty();
	if(status == 0)
	   return 0;
	for(int i=front;i<=rear;i++){
		printf("%d\t",dQueue[i]);
	}
	printf("\n");
	return 1;
}

int main(){
	int ret_data,choice;
	while(1){
		printf("1. Insert from Front:\n");	
		printf("2. Insert from End:\n");
		printf("3. Delete from Front:\n");
		printf("4. Delete from End:\n");
		printf("5. Traverse:\n");
		printf("6. Exit:\n");
	    printf("Enter your choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				ret_data = insertFromFront();
				if(ret_data == 0){
					printf("Front is Full:\n");
				}
				else{
					printf("Data Inserted Successfully:\n");
				}
				
				break;
			}
			case 2:{
				ret_data = insertFromEnd();
				if(ret_data == 0){
					printf("Queue is Full:\n");
				}
				else{
					printf("Inserted Successfully:\n");
				}
				break;
			}
			case 3:{
				ret_data = deleteFromFront();
				if(ret_data == 0){
					printf(":No Data:\n");
				}
				else{
					printf("Data Deleted Successfully:\n");
				}
				break;
			}
			case 4:{
				ret_data = deleteFromEnd();
				if(ret_data == 0){
					printf("No Data:\n");
				}
				else{
					printf("Deleted Successfully:\n");
				}
				break;
			}
			case 5:{
				ret_data = traverse();
				if(ret_data == 0){
					printf("No Data:\n");
				}
				else{
					printf("Data Print Successfully:\n");
				}
				break;
			}
			case 6:{
				exit(1);
				break;
			}
		}
	}
	return 0;
}