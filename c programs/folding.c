#include<stdio.h>
int main(){
	long long int num = 2201920140167;
	int sum=0,temp;
	while(num>0){
		temp = num % 100;
		num /= 100;
		sum = sum + temp;
	}
	printf("%d",sum);
	return 0;
}