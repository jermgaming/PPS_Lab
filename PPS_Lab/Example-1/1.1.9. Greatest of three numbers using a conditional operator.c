#include <stdio.h>

int main() {
	int num1, num2, num3, greatest;

    // Take input from user
	printf("num1: ");
    
	scanf("%d",&num1);
	printf("num2: ");

	scanf("%d",&num2);
	printf("num3: ");
	scanf("%d",&num3);

    // Find the greatest number using the conditional operator
	greatest = (num1>=num2 && num1>=num3)?num1:num2>=num3?num2:num3;

    // Display the greatest number
	printf("Greatest number: %d\n",greatest);

	return 0;
}