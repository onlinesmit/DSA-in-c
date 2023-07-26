#include <stdio.h>
#include <stdlib.h>

typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
} list;
list *newnode = NULL, *head = NULL, *tail = NULL, *temp = NULL,*prev=NULL,*nextt=NULL;

int insert_end(list *head, int data)
{
    int n;
    newnode = (list *)malloc(sizeof(list));
    if (newnode == NULL)
    {
        return 0;
    }
    //printf("Enter the data you want to insert\n");
    //scanf("%d", &n);
    newnode->data = n;
    newnode->next = NULL;

   /* while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    */
   if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    } 

    return 1;
}

int traverse(list *head)
{
    temp = head;
    if (temp == NULL)
    {
        return 0;
    }
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
printf("Null \n");

    return 1;
}

 

int main(){
list head;

 insert_end(&head, 6);
 insert_end(&head, 7);
 traverse(&head);

 
}