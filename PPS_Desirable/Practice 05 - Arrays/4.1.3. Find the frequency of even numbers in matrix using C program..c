//Write your code here
#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[n][m]);
			if(a[n][m]%2==0){
				ans++;
			}
		}
	}
	printf("%d",ans);
	
	return 0;
}