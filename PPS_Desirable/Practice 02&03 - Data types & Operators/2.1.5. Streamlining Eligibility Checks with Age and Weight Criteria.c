#include<stdio.h>
int main(){
	int age,w;
	scanf("%d%d",&age,&w);
	if(age>=18 && w>=40){
		printf("Eligible for Donation\n");
	}else {
		printf("Not Eligible for Donation\n");
	}
	return 0;
}