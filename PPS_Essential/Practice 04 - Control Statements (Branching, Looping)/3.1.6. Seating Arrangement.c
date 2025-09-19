//Write the code here.
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(i%2==0){
				printf("Pass ");
			}else {
				printf("Fail ");
			}
		}printf("\n");
	}
	return 0;
}