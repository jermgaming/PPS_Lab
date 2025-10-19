// Type Content here...
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=1;i<=n;i++){
		int sum=(i*(i+1))/2;
		ans+=sum;
	}
	printf("%d",ans);
}