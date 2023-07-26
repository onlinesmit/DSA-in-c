#include<iostream>
using namespace std;

void fun(int num, string str[]){
	if(num==0){
		return;
	}
	return fun(num%10,str);
	cout << str[num%10];
}

int main(){
	int n;
	printf("Enter The Number:");
	scanf("%d",&n);
	string str[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	cout << "Ans = "  ;
	fun(n,str);
	return 0;
}