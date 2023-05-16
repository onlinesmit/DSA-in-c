#include<stdio.h>
#include<stdlib.h>


typedef struct linkedlist{
	int data;
	struct linkedlist *next;
}list;

list *new_node=NULL, *head=NULL, *last=NULL, *temp=NULL, *pre;

int insertAtEnd(){
	int n;
	new_node = (list*)malloc(sizeof(list));
	if(new_node == NULL){
		return 0;
	}	
	printf("\nEnter value:");
	scanf("%d",&n);
	
	new_node->next = NULL;
	new_node->data = n;
	
	if(head==NULL){
		head=new_node;
	}
	else{
		last->next = new_node;
	}
	last=new_node;
}

int insertAtBegin(){
	
}

int main(){
	int choice;
	while(1){
		printf("1. Insert at end\n");
		printf("2. Insert at begin\n");
		printf("3. Insert at position\n");
		printf("4. Deletion at end\n");
		printf("5. Deletion at begin\n");
		printf("6. Deletion at position\n");
		printf("7. Traverse\n");
		printf("8. Search\n");
		printf("9. Exit\n");
		
		printf("Enter the choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				int ret_data = insertAtEnd();
				if(ret_data==0){
					printf("Memory is not allocated:\n");
					exit(1);
				}
				else{
					printf("Inserted Successfully:\n");
				}
				break;
			}
			case 2:{
				break;
			}
			case 3:{
				break;
			}
			case 4:{
				break;
			}
			case 5:{
				break;
			}
			case 6:{
				break;
			}
			case 7:{
				break;
			}
			case 8:{
				break;
			}
			case 9:{
				exit(1);
			}
			default:{
				break;
			}
		}
	}
	return 0;
}