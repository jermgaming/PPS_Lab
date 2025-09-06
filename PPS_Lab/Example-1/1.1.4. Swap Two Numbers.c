#include <stdio.h>

int main() {
    int num1, num2;

	// write your code...
	scanf("%d%d",&num1,&num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;

    printf("After swapping, first number is: %d\n", num1);
    printf("After swapping, second number is: %d", num2);


	return 0;
}

