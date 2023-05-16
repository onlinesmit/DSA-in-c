#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct Poly
{
	int coff;
	int exp;
	struct Poly *next;
}p;

p *head1=NULL,*head2=NULL,*head3=NULL;
p *tail=NULL,*temp=NULL,*new_node;
//p *t1,*t2;
//t1=h1;
//t2=h2;

struct Poly* createPoly(){
	
	int i,n,c,e;
	printf("How Many Term:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		new_node = (p*)malloc(sizeof(p));
	    if(new_node == NULL){
		    printf("Memory is not allocated:\n");
	    }
		printf("Enter Cofficient:");
		scanf("%d",&c);
		printf("Enter Exponent:");
		scanf("%d",&e);
		new_node->coff = c;
		new_node->exp = e;
		new_node->next = NULL;
		if(temp==NULL){
			temp=new_node;
		}
		else{
			tail->next = new_node;
		}
		tail = new_node;
	}
	return temp;
}

int evaluatePoly(){
	if(head1==NULL){
		return 0;
	}
	int x,sum=0;
	printf("Enter The Value of x :");
	scanf("%d",&x);
	temp=head1;
	while(temp!=NULL){
		if(temp->exp > 1)
		    sum += temp->coff * pow(x,temp->exp);
		else if(temp->exp == 1)
		    sum += temp->coff * x;
		else
		    sum += temp->coff; 
	}
	
	printf("Total = %d",sum);
	return 1;
}

int display(){
	
	if(head1==NULL){
		return 0;
	}
	temp=head1;
	while(temp!=NULL){
		if(temp->exp > 1){
			printf("%dx^%d +", temp->coff,temp->exp);
		}
		else if(temp->exp == 1){
			printf("%dx +", temp->coff);
		}
		else{
			printf("%d +", temp->coff);
		}
		temp=temp->next;
	}
	printf("\b");
	return 1;
}

int main(){
	int choice,ret_data;
	while(1){
		printf("1. Create Polynomial:\n");
	    printf("2. Evaluate Polynomial:\n");
	    printf("3. Display Polynomial:\n");
	    printf("4. Exit:\n");
		printf("Enter Your Choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				head1 = createPoly();
				if(ret_data == 0){
					printf("Not Created:\n");
				}
				else{
					printf("Polynomial Created Successfully:\n");
				}
				break;
			}
			case 2:{
				ret_data = evaluatePoly();
				if(ret_data == 0){
					printf("No Polynomial:\n");
				}
				else{
					printf("Evaluate Successfull:\n");
				}
				
				break;
			}
			case 3:{
				ret_data = display();
				if(ret_data == 0){
					printf("No data:\n");
				}
				else{
					printf("Print Successfully:\n");
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