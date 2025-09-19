// write the code..
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int hrs,min;
	hrs=n/60;
	min=n%60;
	printf("%d Hours and %d Minutes\n",hrs,min);
	return 0;
}