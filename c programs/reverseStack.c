#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 30
int top = -1;
char stack[MAX];


// overflow function
int overflow() {
    if(top == MAX-1)
        return 0;

    return 1;
}

// underflow function

int underflow() {
    if(top == -1)
        return 0;

    return 1;
}

// push function
int push(char ch){
    int status = overflow();
    
    if(status==0)
        return 0;

    stack[++top] = ch;
    
    return 1;
}


int reverse() {
    int temp = top;

    int status;

    status = underflow();

    if(status == 0)
        return 0;

    while(temp>=0){
        printf("%c",stack[temp]);
        temp--;
    }

    return 1;
}




int main(){
	int i,ret_data;
	char str[MAX];
	printf("Enter String:");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		ret_data = push(str[i]);
		if(ret_data == 0){
			printf("Stack is overflow:\n");
			exit(1);
		}
	}
	reverse();
	return 0;
}