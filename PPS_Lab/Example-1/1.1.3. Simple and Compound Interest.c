#include <stdio.h>
#include <math.h>
void main() {
	float principle, rate, time, simpleInterest, compoundInterest, interest;
	printf("Enter P,R,T: ");
	scanf( "%f%f%f",&principle,&rate,&time);
	simpleInterest = (principle*rate*time)/100;
	
	compoundInterest = (principle*pow(1+(rate/100),time))-principle;
	printf("SI= %f\n",simpleInterest);
	printf("CI= %f\n",compoundInterest );
}