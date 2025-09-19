// Write your code here...
#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int score=n-1+(1+2*(n-1))*(m-1);
	printf("%d\n",score);
	return 0;
}