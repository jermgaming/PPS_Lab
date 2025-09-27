// Type your code here...
#include<stdio.h>
#include<stdlib.h>
int main(){
	int h1,a1,h2,a2;
	scanf("%d%d%d%d",&h1,&a1,&h2,&a2);
	int ans1=(h2+a1-1)/a1;
	int ans2=(h1+a2-1)/a2;
	if(ans1<=ans2){
		printf("Yes");
	}else {
		printf("No");
	}
	return 0;
}