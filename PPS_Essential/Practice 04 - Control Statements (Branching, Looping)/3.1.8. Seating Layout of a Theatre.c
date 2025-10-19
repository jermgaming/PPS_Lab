//Write the code here.
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int odd=1,even=2;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i%2==1){
				printf("%d ",odd);
				odd=odd+2;
			}else {
				printf("%d ",even);
				even=even+2;
			}
		}odd=1;even=2;printf("\n");
		
	}
	return 0;
}