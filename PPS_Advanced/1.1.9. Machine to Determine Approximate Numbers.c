#include<stdio.h>
int main(){
	float a,b;
	scanf("%f%f",&a,&b);
	(a-b<=0.5 && b-a<=0.5)?printf("Approximate number"):printf("Not an Approximate number");
	return 0;
}