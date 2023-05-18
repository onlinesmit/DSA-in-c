#include<stdio.h>
#include<stdlib.h>

typedef struct linkedlist{
	int data;
	struct linkedlist *next;
	struct linkedlist *prev;
}list;

list *new_node= NULL, *head=NULL, *last=NULL, *temp=NULL, *pre;
int n;

int insertAtEnd(){
	new_node = (list*)malloc(sizeof(list));
	if(new_node==NULL){
		return 0;
	}
	printf("Enter Data:");
	scanf("%d",&n);
	new_node->next = NULL;
	new_node->data = n;
	if(head==NULL){
		head = new_node;
		last = new_node;
		new_node->prev = NULL;
	}
	else{
		last->next = new_node;
		new_node->prev = last;
		last = new_node;
	}
	return 1;
}
int insertAtBegin(){
	new_node = (list*)malloc(sizeof(list));
	if(new_node == NULL){
		return 0;
	}
	printf("Enter Number:");
	scanf("%d",&n);
	new_node->data = n;
	new_node->prev = NULL;
	new_node->next = head;
	head = new_node;
	return 1;
}

int deleteAtEnd(){
	temp = last;
	if(temp==NULL){
		return 0;
	}
	if(head->prev==NULL && head->next==NULL){
		head=NULL;
		last=NULL;
	}
	else{
		last = temp->prev;
	    last->next = NULL;
	}

	free(temp);
	return 1;	
}

int deleteAtBegin(){
	temp=head;
	if(head==NULL){
		return 0;
	}
	if(head->prev==NULL && head->next==NULL){
		head=NULL;
		last=NULL;
	}
	else{
		head=temp->next;
		head->prev=NULL;
	}
	free(temp);
	return 1;
}

int insert_at_pos()
{
    int n, poss, i = 1;
    new_node = (list *)malloc(sizeof(list));
    if (new_node == NULL)
    {
        return 0;
    }
    printf("Enter the data you want to insert\n");
    scanf("%d", &n);
    printf("Enter the position where you want to insert\n");
    scanf("%d", &poss);
    new_node->data = n;
    temp = head;
    while (i < poss - 1)
    {
        temp = temp->next;
        i++;
    }
	new_node->prev = temp;
    new_node->next = temp->next;
    temp->next = new_node;
	temp->next->prev = new_node;

    return 1;
}

int delete_at_pos(){
	int pos,i=1;
	printf("\nEnter Position Number:");
	scanf("%d",&pos);
	temp = head;
	if(head==NULL){
		return 0;
	}
	while(i<pos){
		pre=temp;
		temp=temp->next;
		i++;
	}
	new_node = temp->next;
	pre->next = temp->next;
	new_node->prev = temp->prev;
	free(temp);
	return 1;	
}


int traverse(){
	temp=head;
	if(head==NULL){
		return 0;
	}
	while(temp!=NULL){
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	return 1;
}

int search(){
	int i=1,key;
	temp=head;
	if(head==NULL){
		return 0;
	}
	printf("Enter Search Key:\n");
	scanf("%d",&key);
	while(temp->data!=key){
		temp = temp->next;
		i++;
	}
	if(temp==NULL) return 1;
	else return 2;
	
}

int main()
{
	int choice,status;
	while(1){
		printf("1. Insert at End:\n");
		printf("2. Insert at Begin:\n");
		printf("3. Insert at Position:\n");
		printf("4. Delete at End:\n");
		printf("5. Delete at Begin:\n");
		printf("6. Delete at Position:\n");
		printf("7. Traverse:\n");
		printf("8. Search:\n");
		printf("9. Exit:\n");
		printf("Enter Your Choice:");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:{
			status = insertAtEnd();
				if(status == 0){
					printf("Memory is not allocated:\n");
				}
				else{
					printf("Data inserted successfully:\n");
				}
				break;
			}
			case 2:{
				status = insertAtBegin();
				if(status == 0){
					printf("Memory is not allocated:\n");
				}
				else{
					printf("Data inserted successfully:\n");
				}
				break;
			}
			case 3:{
				status = insert_at_pos();
				if(status == 0){
					printf("Operation not performed: \n");
				}
				else{
					printf("Insert at the position successfully: \n");
				}
				break;
			}
			case 4:{
				status = deleteAtEnd();
				if(status == 0){
					printf("Data not found:\n");
				}
				else{
					printf("Delete successfully:\n");
				}
				break;
			}
			case 5:{
				status = deleteAtBegin();
				if(status == 0){
					printf("No Data:\n");
				}
				else{
					printf("Delete Successfully:\n");
				}
				break;
			}
			case 6:{
				status = delete_at_pos();
				if(status == 0){
					printf("No Data:\n");
				}
				else{
					printf("Delete Successfully:\n");
				}

				break;
			}
			case 7:{
				status = traverse();
				if(status == 0){
					printf("Data Not Found:\n");
				}
				else{
					printf("\n Print Successfully:\n");
				}
				break;
			}
			case 8:{
				status = search();
				if(status == 0){
					printf("No Any Data:\n");
				}
				else if(status == 1){
					printf("Element not in the list:\n");
				}
				else{
					printf("Data found at positon %d . \n",status);
				}
				break;
			}
			case 9:{
				exit(1);
				break;
			}
		}
	}
	return 0;
}