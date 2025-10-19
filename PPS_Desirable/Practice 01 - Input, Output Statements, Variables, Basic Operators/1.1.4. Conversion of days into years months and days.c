// Write your complete code
#include<stdio.h>
int main(){
	int d;
	scanf("%d",&d);
	int y,m=0,D=0;
	y=d/365;
	m=d-(y *365);
	D=m;
	m=m/30;
	D=D-(m*30);
	printf("%d Y(s) %d M(s) %d D(s)",y,m,D);
	return 0;
}