#include <stdio.h>
#include <stdlib.h>

// typedef struct linkedlist
// {
//     int data;
//     struct linkedlist *next;
// } list;
// list *newnode = NULL, *head = NULL, *tail = NULL, *temp = NULL,*prev=NULL,*nextt=NULL;

typedef struct node {
    int data;
    struct node *next ;
}list;

int main(){


int choice;
list *head =NULL, *newnode = NULL, *temp =NULL;

while(choice){
newnode = (list *)malloc(sizeof(list));

printf("Enter data: ");
scanf("%d", &newnode->data);
newnode ->next = NULL;

if(head==NULL){
    head = newnode;
    temp = newnode;
}
else{
    temp->next = newnode;
    temp = newnode;
}

printf("Enter choice (0,1)?: ");
scanf("%d", &choice);

}

temp=head;
while(temp!=NULL){
    printf("%d->", temp->data);
    temp = temp->next;
}
printf("NULL");

    return 0;
}



// void insert_end(list *head, int n)
// {
//     newnode = (list *)malloc(sizeof(list));
    
//     newnode->data = n;
//     newnode->next = NULL;

//     if(head ==NULL){
//         head = newnode;
//     }
//     else{
//         newnode=head;
//     while (temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=newnode;
//     }

// }

// int traverse(list *head){
//     list *temp = head;
//     if (temp == NULL)
//     {
//         return 0;
//     }
//     while(temp!=NULL){
//         printf("%d->", temp->data);
//         temp = temp->next;
//     }
//     return 1;

// }

// int main(){


//    list *head = NULL;
//     insert_end( head, 10);
//     insert_end( head, 18);
//     insert_end( head, 14);
    
//     traverse(head);

//       return 0;
// }
