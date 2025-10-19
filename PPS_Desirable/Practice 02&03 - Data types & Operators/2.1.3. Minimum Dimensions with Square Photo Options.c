//Write the code here

#include<stdio.h>
int main(){
	int L;
	int W,H;
	scanf("%d%d%d",&L,&W,&H);
	if(W<L || H<L){
		printf("UPLOAD ANOTHER\n");
	}else if(W>=L && H>=L){
		if(W==H){
			printf("ACCEPTED");
		}else {
			printf("CROP IT");
		}
	}
	return 0;
}