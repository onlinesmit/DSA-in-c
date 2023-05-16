#include <stdio.h>
#define MAX 5
int iqueque[MAX];
int enqueque();
//int dequeqe();
//int isFull();
//int isEmpty();
//int traverse();
int front = -1, rear = -1;

void main()
{
    int choice, status;
    while (1)
    {
        printf("\n Insert Element: ");
        printf("\n Delete element: ");
        printf("\n Display the elemets: ");

        printf("\n Enter the choice: ");
        scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                enqueque();
                printf("Performed successfully");
                break;
            
            case 2:
                //dequeqe();
                printf("Performed successfully");
                break;
            case 3:
               // traverse();
                printf("Performed succussfully");
                break;
            case 4: 
                exit(1);
            default:
                break;
            } //end of switch
    } //end of while
} //end of main

int enqueque(){
    int n;
    int status;
        if(status == 0)
            return 0;
        
        if(front == -1){
            front = 0;
            rear = 0;
            printf("Enter the number: ");
            scanf("%d", &n);
            return 1;
        } //end of enqueqe

}