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

void addPoly(){
	int c,e;
	head3=temp;
	while(head1!=NULL && head2!=NULL){
		if(head1->exp == head2->exp){
			temp->coff = head1->coff + head2->coff;
			temp->exp = head1->exp;
			head1=head1->next;
			head2=head2->next;
		}
		else if(head1->exp > head2->exp){
			temp->coff = head1->coff;
			temp->exp = head1->exp;
			head1 = head1->next;
		}
		else{
			temp->coff = head2->coff;
			temp->exp = head2->exp;
			head2 = head2->next;
		}
		
	}
	temp->next=NULL;
	//head3=temp;
}

int displayPoly(struct Poly *temp1){
	
	if(temp1==NULL){
		return 0;
	}
	temp=temp1;
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
		printf("1. Enter first polynomial:\n");
		head1 = createPoly();
		displayPoly(head1);
	    printf("2. Enter second polynomial:\n");
	    head2 = createPoly();
	    displayPoly(head2);
	    printf("3. Add Polynomial:\n");
	    addPoly();
	    displayPoly(head3);
	
	return 0;
}