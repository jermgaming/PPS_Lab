// Function to add two numbers
float add(float a,float b ) {
	return a+b;
}

// Function to subtract two numbers
float subtract(float a,float b) {
	return a-b;
}

// Function to multiply two numbers
float multiply(float a,float b) {
	return a*b;
}

// Function to divide two numbers
float divide(float a,int b) {
	if(b==0){
		printf("Cannot divide by zero\n");
		return 0.00;
	}
	return a/b;
	
	
}
#include<stdio.h>
int main() {
	float num1, num2, result;
	char operator;
	
	scanf("%f %f", &num1, &num2);
	
	scanf(" %c", &operator);

	switch (operator) {
		case '+':
			result = add(num1, num2);
			break;
		case '-':
			result = subtract(num1, num2);
			break;
		case '*':
			result = multiply(num1, num2);
			break;
		case '/':
			result = divide(num1, num2);
			break;
		default:
			printf("Error: Invalid operator.\n");
			return 1; 
		
	}
	
	printf("Result: %.2f\n", result);
	return 0;
}
