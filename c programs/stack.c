#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int top = -1;
int stack[MAX];
int status;

int overFlow(){
	if(top==MAX-1){
		return 0;
	}
	return 1;
}
int underFlow(){
	if(top==-1){
		return 0;
	}
	return 1;
}

int push(){
	int n;
	status = overFlow();
	if(status == 0){
		return 0;
	}
	printf("Enter The Data:");
	scanf("%d",&n);
	stack[++top] = n;
	return 1;	
}

int pop(){
	status = underFlow();
	if(status == 0){
		return 0;
	}
	printf("Deleted Element = %d",stack[top]);
	top--;
	return 1;
}

int traverse(){
	int i=top;
	status = underFlow();
	if(status == 0){
		return 0;
	}
	while(i>=0){
		printf("%d\n",stack[i--]);
	}
	return 1;	
}

int search(){
	int key,i = top;
	status = underFlow();
	if(status == 0){
		return 0;
	}
	printf("Enter Search Key:");
	scanf("%d",&key);
	while(i>=0){
		if(stack[i--]==key){
			break;
		}
	}
	return i+2;
}

int main(){
	int choice,ret_data;
	while(1){
		printf("1. Insert Element in the Stack:\n");
	    printf("2. Delete Element from the Stack:\n");
	    printf("3. Traverse:\n");
	    printf("4. Search:\n");
	    printf("5. Exit:\n");
	    printf("Choose the any one:");
	    scanf("%d",&choice);
	    
	    switch(choice){
	    	case 1:{
	    		ret_data = push();
	    		if(ret_data == 0){
	    			printf("Stack is overflow:\n");
				}
				else{
					printf("Element Added Successfully:\n");
				}
	    		
				break;
			}
			case 2:{
				ret_data = pop();
	    		if(ret_data == 0){
	    			printf("Stack is underflow:\n");
				}
				else{
					printf("Element Delete Successfully:\n");
				}
				break;
			}
			case 3:{
				ret_data = traverse();
				if(ret_data == 0){
					printf("No Data:\n");
				}
				printf("Data Print Successfully:\n");
				break;
			}
			case 4:{
				ret_data = search();
				if(ret_data == 0){
					printf("Underflow:\n");
				}
				else{
					printf("Your data at position no. %d \n",ret_data);
				}
				
				break;
			}
			case 5:{
				exit(1);
				break;
			}
		}
	}
	return 0;
}