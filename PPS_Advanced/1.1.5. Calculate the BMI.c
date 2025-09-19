#include<stdio.h>
int main(){
	int weight;
	float height;
	scanf("%d",&weight);
	scanf("%f",&height);
	float BMI=(weight)/(height*height);
	printf("%0.2f",BMI);
	return 0;
}