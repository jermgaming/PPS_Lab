// write the code..
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n>=0 && n<=9){
		printf("Insufficient Earning\n");
	}else if(n>=10 && n<=99){
		printf("Very Low Earning\n");
	}else if(n>=100 && n<=999){
		printf("Low Earning\n");
	}else if(n>=1000 && n<=9999){
		printf("Sufficient Earning\n");
	}else {
		printf("High Earning\n");
	}
	return 0;
}