#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    fab(n);
    return 0;
}
int fab(int n)
{ 
    if(n<=1)
    return 1;
    else
    fab(n-1)+fab(n-2);
}