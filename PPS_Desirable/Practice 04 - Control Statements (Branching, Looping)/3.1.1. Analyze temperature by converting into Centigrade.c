#include<stdio.h>
float centi(float a){
	return (a-32)*(5/9.00);
}
int main(){
	float a;
	scanf("%f",&a);
	float c=centi(a);
	printf("%0.2f Centigrade\n",c);
	if(c>=150){
		printf("Very Hot\n");
	}else if(c>=100){
		printf("Hot\n");
	}else {
		printf("Moderate\n");
	}
	return 0;
}