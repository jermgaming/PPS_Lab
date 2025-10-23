//write your code here...
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int ans=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				continue;
			}
			if(arr[i][j]!=0){
				ans=0;
				break;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i][i]!=1){
			ans=0;
			break;
		}
	}
	if(ans==0){
		printf("It is not an identity Matrix\n");
	}else {
		printf("It is an identity Matrix\n");
	}
	return 0;
}