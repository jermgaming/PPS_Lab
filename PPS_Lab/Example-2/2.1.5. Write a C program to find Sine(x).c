#include <stdio.h>
#include <math.h>
void main() {
	// decalre variables here
	int n;
	float d;
	printf("Enter the value of n : ");
	scanf("%d", &n );
	printf("Enter degrees : ");
	scanf("%f",&d  );
	// write code here
	float r=((3.14)/180)*d;
	float ans=0;
	int term=1;
	int sign=1;
	for(int i=0;i<n;i++){
		long fact=1;
		for(int i=1;i<=term;i++){
			fact=fact*i;
		}
		//printf("fact is %ld",fact);
		double termAns=pow(r,term);
		termAns=termAns/fact;
		sign=i%2==0?1:-1;
		termAns=sign*termAns;
		ans+=termAns;
		term=term+2;
	}
	float builtIn=sin(r);
	
	printf("The sine value sin(%f) = %f\n", d,ans );
	printf("The sine value using built-in sin(%f) = %f\n",d,builtIn  );	
}	