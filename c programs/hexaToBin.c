#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int top = -1;
int stack[MAX];
int status;


 void decToBinary(int d){
	while(d>0){
		stack[++top] = d%2;
	    d = d/2;
	}
}

void display(){
	int i = top;
	while(i>=0){
		printf("%d",stack[i--]);
	}
}

int main(){
	int num,ch;
	printf("Enter the Hexa decimal number:");
    scanf("%d",&num);
	decToBinary(num);
	display();
	
	return 0;
}