//Write the code here
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int ans=n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf("%d ",ans);
		}ans--;printf("\n");
	}
	return 0;
}