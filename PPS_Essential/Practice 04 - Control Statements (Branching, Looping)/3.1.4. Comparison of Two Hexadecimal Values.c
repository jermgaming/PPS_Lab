// write the code..
#include<stdio.h>
int main(){
	int a,b;
	scanf("%x%x",&a,&b);
	a>b?printf(">"):(a==b)?printf("="):printf("<");
	return 0;
}