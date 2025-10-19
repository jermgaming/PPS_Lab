#include<stdio.h>
int gcd(int a,int b){
	while(b){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int main(){
	int ch;
	int a,b;
	scanf("%d",&ch);
	switch(ch){
		case 1:
			scanf("%d%d",&a,&b);
			printf("Sum: %0.2f\n",a*1.00+b);
			break;
		case 2:
			scanf("%d%d",&a,&b);
			printf("Difference: %0.2f\n",a*1.00-b);
			break;
		default:
			printf("Invalid choice\n");
			break;
		case 3:
			scanf("%d%d",&a,&b);
			printf("Product: %0.2f\n",a*1.00*b);
			break;
		case 4:
			scanf("%d%d",&a,&b);
			if(b==0){
				printf("Division by zero is not allowed\n");
				break;
			}
			printf("Quotient: %0.2f\n",a*1.00/b);
			break;
		case 5:
			scanf("%d%d",&a,&b);
			printf("HCF: %d\n",gcd(a,b));
			break;
		case 6:
			scanf("%d%d",&a,&b);
			int lcm=(a*b)/gcd(a,b);
			printf("LCM: %d\n",lcm);
	}
	return 0;
}