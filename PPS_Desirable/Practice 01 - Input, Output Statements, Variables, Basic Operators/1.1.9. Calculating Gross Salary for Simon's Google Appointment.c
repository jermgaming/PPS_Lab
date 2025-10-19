// Write your complete code here
#include<stdio.h>
int main(){
	int s;
	int da,hra;
	scanf("%d%d%d",&s,&da,&hra);
	int DA=(da*s)/100;
	int HRA=(hra*s)/100;
	int GrossSalary=s+DA+HRA;
	printf("%d\n",GrossSalary);
	return 0;
}