#include<stdio.h>
#include<stdlib.h>
#define MAX 10
    int top = -1;
    int choice;
    int status;
    int stack[MAX];

    int underflow(){
        if(top == -1){
        return 0;
        }
        return 1;

    };

    int overflow(){
        if(top == MAX){
            return 0
        }
        return 1;

    };


int main()
{
    while(1){

        printf("1. INSERT the data: \n");
        printf("2. REMOVE the data: \n");
        printf("3. TRAVERSE: \n");
        printf("4. EXIT!! \n")

        printf("Enter your choice: ");
        scanf("%d, &choice");

        switch (choice)
        {
        case 1:{
            status = push();
            if(status == 0){
                printf("Operation not perform: ");
            }
            else{
                printf("Push operation is perform: ");
            }

            break;
        }
        case 2:{
            status = pop();
            if(status == 0){
                printf("Operation not perform: ")
            }
            else{
                printf("Pop operation is performed");
            }

            break;
        }
        case 3:{
            status = traverse();
            if(status == 0){
                printf("Operatin not perform: ");
            }
            else{
                printf("Traverse is: ");
            }

            break;
        }
        case 4:{

            break;
        }
        default:
            break;
        }

    }




int push()
{
    int n;
    int status;

    status = overflow();
    {

        if(status==0)
        return 0;
    }
    printf("Enter number: ");
    scanf("%d", &n);
    stack(++top)=n;
    return 1;

    }

int pop()
{
    int status;
    status = underflow();
    (
        if(status == 0){
            return 0;
        }
        printf("Related elements: %d, &stack(top)");
        top--;
    )
}
}