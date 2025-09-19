// write your code here..
#include<stdio.h>
int main(){
	float basicSalary;
	scanf("%f",&basicSalary);
	float employeeFund=(basicSalary/100)*17.5;
	float employerFund=(basicSalary/100)*23.5;
	printf("%0.2f\n",employeeFund);
	printf("%0.2f",employerFund);
	return 0;
}