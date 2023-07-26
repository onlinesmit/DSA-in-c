#include <stdio.h>
#include <stdlib.h>

typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
} list;
list *newnode = NULL, *head = NULL, *tail = NULL, *temp = NULL,*prev=NULL,*nextt=NULL;

int insert_end()
{
    int n;
    newnode = (list *)malloc(sizeof(list));
    if (newnode == NULL)
    {
        return 0;
    }
    printf("Enter the data you want to insert\n");
    scanf("%d", &n);
    newnode->data = n;
    newnode->next = NULL;
    // if(head ==NULL){
    //     head = newnode;
    // }
    // while (temp->next!=NULL)
    // {
    //     temp=temp->next;
    // }
    // temp->next=newnode;
    
    
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

int traverse()
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

    return 1;
}

int getLength()
{
    int count=0;
    temp = head;
    if (temp == NULL)
    {
        return 0;
    }
    while (temp != NULL)
    {
        count++; 
        temp = temp->next;
    }
    printf("The lengh is: %d", count);

    return 1;
}

int reverse()
{   prev = 0;
    temp =newnode= head;
    if (newnode == NULL)
    {
        return 0;
    }
    while (newnode != NULL)
    {
        newnode = newnode->next;
        temp->next = prev;
        prev = temp;
        temp =newnode;
    }
    head = prev;

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
    printf("Enter the data you want to insert\n");
    scanf("%d", &n);
    newnode->data = n;
    newnode->next = head;
    head = newnode;
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
    printf("Enter the data you want to insert\n");
    scanf("%d", &n);
    printf("Enter the position where you want to insert\n");
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

    return 1;
}

int insert_particular_num()
{
    int n, num, count = 0;
    newnode = (list *)malloc(sizeof(list));
    if (newnode == NULL)
    {
        return 0;
    }
    printf("Enter the data you want to insert\n");
    scanf("%d", &n);
    newnode->data = n;
    printf("Enter the number after you want to insert\n");
    scanf("%d", &num);

    // Search the number and note its pos
    temp = head;
    if (temp == NULL)
    {
        return 2;
    }
    while (temp != NULL)
    {
        if (temp->data == num)
            break;
        temp = temp->next;
        count++;
    }
    // if (temp == NULL)
    // {
    //     return 2;
    // }

    // newnode->data = n;
    newnode->next = temp->next;
    temp->next = newnode;
    return 1;
}

int delete_at_end()
{
    temp = head;
    prev = head;

    if(temp==NULL)
    {
        return 0;
    }
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;

    }
    prev->next=NULL;
   // tail=prev;
    if(temp==head)
    {
        head=NULL;
    }

    free(temp);
    return 1;
}

 int delete_at_begin()
 {
     temp = head;

    if(temp==NULL)
    {
        return 0;
    }

    head=temp->next;
    free(temp);

    return 1;

 }

 int delete_at_pos()
 {
    temp=head;
    int poss;
    printf("Enter the position for deletion \n");
    scanf("%d",&poss);
    int i=1;
    if(head==NULL)
    {
        temp=NULL;
        return 0;
    }
    

    temp=head; 
    while(i<poss-1)
    {  
        temp=temp->next;
        i++;
    }
    nextt=temp->next;
    temp->next=nextt->next;
    free(nextt);

    return 1;

 }
int main()
{
    int choice, status = 0;
    while (1)
    {
        printf("\n1. Insert at end \n 2. Insert at begining \n 3. Insert at position \n 4. Traversre or Display \n 5. Insert at pariticular number \n 6.Delete at End \n 7.Delete at Begining \n 8.Delete at Particular-Pos\n 9. GetLength of list \n 10. Reverse \n 11. Exit \n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            status = insert_end();
            if (status == 1)
            {
                printf("\nInsert at end successfully\n");
            }
            else
            {
                printf("Not perform successfully\n");
            }
            break;

        case 2:
            status = insert_beg();
            if (status == 1)
            {
                printf("\nInsert at begin successfully\n");
            }
            else

            {
                printf("Not perform successfully\n");
            }
            break;

        case 3:
            status = insert_pos();
            if (status == 1)
            {
                printf("\nInsert at position successfully\n");
            }
            else
            {
                printf("Not perform successfully\n");
            }
            break;

        case 4:
            status = traverse();
            if (status == 1)
            {
                printf("\nTraverse perform successfully\n");
            }
            else
            {
                printf("Not perform successfully\n");
            }
            break;

        case 5:
            status = insert_particular_num();
            if (status == 1)
            {
                printf("\n insert at particular number perform successfully\n");
            }
            else
            {
                printf("Not perform successfully\n");
            }
            break;

        case 6:
            status = delete_at_end();
            if (status == 1)
            {
                printf("\n delete at end perform successfully\n");
            }
            else
            {
                printf("Data not found\n");
            }
            break;

         case 7:
            status = delete_at_begin();
            if (status == 1)
            {
                printf("\n delete at begin perform successfully\n");
            }
            else
            {
                printf("Data not found \n");
            }
            break;

            case 8:
            status = delete_at_pos();
            if (status == 1)
            {
                printf("\n Delete at the possitin successfully \n");
            }
            else
            {
                printf("Not perform successfully \n");
            }
            break;

            case 9:
            status = getLength();
            if (status == 1)
            {
                printf("\n successfully printed \n");
            }
            else
            {
                printf("Not perform successfully \n");
            }
            break;

            case 10:
            status = reverse();
            if (status == 1)
            {
                printf("\n successfully reverse \n");
            }
            else
            {
                printf("Not perform successfully \n");
            }
            break;

            case 11:
            exit(1);
            break;
        }
    }

    return 0;
}