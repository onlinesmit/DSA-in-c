#include<stdio.h>
int main(){
	long long int num = 220192014001;
	int sum=0,temp;
	while(num>0){
		temp = num % 100;
		num /= 100;
		sum = sum + temp;
	}
	printf("%d",sum);
	return 0;
}