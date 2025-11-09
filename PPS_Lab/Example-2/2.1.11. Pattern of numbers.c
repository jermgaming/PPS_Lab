#include<stdio.h>
int main(){
	printf("Enter rows: ");
	int n;
	scanf("%d",&n);
	if(n==0){
		printf("Number of rows should be greater than zero.\n");
	}
	for(int i=1;i<=n;i++){
		for(int s=1;s<=n-i;s++){
			printf("   ");
		}
		for(int x=1;x<=i;x++){
			printf("%d  ",x);
		}
		for(int y=i-1;y>=1;y--){
			printf("%d  ",y);
		}
		printf("\n");
	}
	return 0;
}