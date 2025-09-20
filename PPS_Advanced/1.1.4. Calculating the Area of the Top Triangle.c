#include<stdio.h>
#include<math.h>
int main(){
	float s1,s2,s3;
	scanf("%f%f%f",&s1,&s2,&s3);
	float s=(s1+s2+s3)/2.00;
	float area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
	printf("%0.2f",area);
	return 0;
}