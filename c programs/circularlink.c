#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} list;

list *newnode = NULL, *temp = NULL, *tail = NULL, *head = NULL;

int insert_end(){
    int n;
    newnode = (list*)malloc(sizeof(list));
    if(newnode==NULL){
        return 0;
    }
    printf("\n Enter the data u  want to insert: ");
    scanf("%d", &n);
    newnode->data = n;
    newnode ->next = NULL;

    if(head ==0){
        head = newnode;
        tail = newnode;
    }
    else{
    tail->next = temp;
    tail= temp;
    tail->next = head;
    }
 return 1;
}

int insert_beg()
{
    int n;
    newnode = (list *)malloc(sizeof(list));
    if (newnode == NULL)
    {
        return 0;
    }
    printf("\n Enter the data you want to insert: ");
    scanf("%d", &n);
    newnode->data = n;
    newnode->next = head;
    head = newnode;
    tail->next = head;
    return 1;
}

int insert_pos()
{
    int n, poss, i = 1;
    newnode = (list *)malloc(sizeof(list));
    if (newnode == NULL)
    {
        return 0;
    }
    printf("\n Enter the data you want to insert: ");
    scanf("%d", &n);
    printf("\n Enter the position where you want to insert: ");
    scanf("%d", &poss);
    newnode->data = n;
    temp = head;
    while (i < poss - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    tail->next = head;

    return 1;
}

int traverse()
{
     temp = head;
    if (temp == NULL)
    {
        return 0;
    }
    while (temp->next != head)
    {
        printf(" %d\t", temp->data);
        temp = temp->next;
    }
    printf(" %d\t", temp->data);

    return 1;
}

int main()
{

    int choice, status = 0;
    while (1)
    {
        printf("\n\n 1. Insert the begining: ");
        printf("\n\n 2. Insert at the position: ");
        printf("\n\n 3. Insert at the end: ");
        printf("\n\n 4. Traverse: ");

        printf("\n\n Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            status = insert_beg();
            if (status == 1)
            {
                printf("\n Successfully inserted...");
            }
            else
            {
                printf("\n Failed..");
            }
            break;
        case 2:
            status = insert_pos();
            if (status == 1)
            {
                printf("\nInsert at position successfully\n");
            }
            else
            {
                printf("\n Not perform successfully\n");
            }
            break;

        case 3:
            status = insert_end();
            if(status == 1){
                printf("\n Successfully inserted ");
            }
            else{
                printf("\n Not inserted ");
            }
        break;

        case 4:
         status = traverse();
            if(status == 1){
                printf("\n Successfully traversed ");
            }
            else{
                printf("\n Not tarversed ");
            }
        default:
            break;
        }
    }
    return 0;
}