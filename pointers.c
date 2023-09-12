#include <stdio.h>
void fun(int* ,int*);
int i=0,j=1;
int main() 
{
	fun(&i, &j);
	printf("%d%d",i,j);
	return 0;
}
void fun(int *i,int *j)
{
	i=j;
	*i=3;
}
