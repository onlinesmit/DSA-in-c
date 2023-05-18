#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct polynomial
{
int coff,exp;
struct polynomial *next;

}poly;
poly *head1=NULL,*head2=NULL,*head3=NULL,*newnode=NULL;
poly *t1=NULL,*t2=NULL,*t3=NULL;
void main()
{
int term,c,e;
int i,j;
printf("\n Enter the total term of polynomial first equation ");
scanf("%d",&term);

for(i=0;i<term;i++)
{
 newnode = (poly*) malloc(sizeof(poly));
	if(newnode == NULL)
	{
	printf(" \n not enough memory ");
	exit(1);
	}
printf("\n Enter term %d",i+1);
printf("\n enter the coff.. ");
scanf("%d",&c);
printf("\n enter the exp.. ");
scanf("%d",&e);
newnode->coff=c;
newnode->exp=e;
newnode->next = NULL;
	if(head1 == NULL)
	head1= newnode;
	else
	{
	t1 = head1;
		while(t1->next != NULL)
		t1= t1->next;
	t1->next = newnode;
	}
} // end of for loop[
printf("\n First polynomial equation is.. ");
t1= head1;
while(t1!= NULL)
{
printf("%d  X %d \t",t1->coff,t1->exp);
t1=t1->next;
}// end of while

// for second polynomial equation..

printf("\n Enter the total term of polynomial second equation ");
scanf("%d",&term);

for(i=0;i<term;i++)
{
 newnode = (poly*) malloc(sizeof(poly));
	if(newnode == NULL)
	{
	printf(" \n not enough memory ");
	exit(1);
	}
printf("\n Enter term %d",i+1);
printf("\n enter the coff.. ");
scanf("%d",&c);
printf("\n enter the exp.. ");
scanf("%d",&e);
newnode->coff=c;
newnode->exp=e;
newnode->next = NULL;
	if(head2 == NULL)
	head2= newnode;
	else
	{
	t1 = head2;
		while(t1->next != NULL)
		t1= t1->next;
	t1->next = newnode;
	}
} // end of for loop[
printf("\n second polynomial equation is .. ");
t1= head2;
while(t1!= NULL)
{
printf("%d  X %d \t",t1->coff,t1->exp);
t1=t1->next;
}// end of while

//addition of two polynomial equation...

t1=head1;
t2=head2;

while( (t1 != NULL) || (t2 != NULL) )
{
	if(t1->exp > t2->exp)
	{
	c=t1->coff;
	e=t1->exp;
	t1=t1->next;
	}
	else if(t1->exp < t2->exp)
	{
	c=t2->coff;
	e=t2->exp;
	t2=t2->next;
	}
	else
	{
	c= t1->coff * t2->coff;
	e= t1->exp;
	t1=t1->next;
	t2= t2->next;
	}
 newnode = (poly*) malloc(sizeof(poly));
	if(newnode == NULL)
	{
	printf(" \n not enough memory ");
	exit(1);
	}
newnode->coff=c;
newnode->exp=e;
newnode->next = NULL;
	if(head3 == NULL)
	head3= newnode;
	else
	{
	t3 = head3;
		while(t3->next != NULL)
		t3= t3->next;
	t3->next = newnode;
	} // end of else
} // end of while
printf("\n After Multiplication polynomial equation is .. \n");
t1= head3;
while(t1!= NULL)
{
printf("%d  X %d \t",t1->coff,t1->exp);
t1=t1->next;
}// end of while

}// end of main