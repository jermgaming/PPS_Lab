
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j,k,num;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf("  ");
		}
		num=1;
		for(k=1;k<=2*i-1;k++,num++){
			printf("%d ",num);
		}printf("\n");
		
	}
	for(i=n-1;i>=1;i--){
		for(j=1;j<=n-i;j++){
			printf("  ");
		}
		num=1;
		for(k=1;k<=2*i-1;k++,num++){
			printf("%d ",num);
		}printf("\n");
		
	}
	return 0;
}