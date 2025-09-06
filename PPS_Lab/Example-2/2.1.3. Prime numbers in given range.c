#include<stdio.h>
int checkPrime(int n){
	int ans=1;
	if(n==1) return 0;
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			ans=0;
			break;
		}
	}
	return ans==1?1:0;
}
int main(){
	int start,end;
	scanf("%d%d",&start,&end);
	for(int i=start;i<=end;i++){
		if(checkPrime(i)==1){
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}