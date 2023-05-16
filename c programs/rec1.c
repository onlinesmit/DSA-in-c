#include<stdio.h>

int mprint(int n){
	if(n<1)
	   return 1;
	mprint(n-1);
	printf("%d",n);
	mprint(n-3);
}

int main(){
	printf("%d",mprint(4));
}