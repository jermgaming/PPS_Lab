// write the code..
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n%2==0){
		printf("%0.5f\n",(n/2.0)/n*1.0);
	}else {
		int temp=n/2;
		printf("%0.5f\n",(temp+1.0)/n);
	}
	return 0;
}