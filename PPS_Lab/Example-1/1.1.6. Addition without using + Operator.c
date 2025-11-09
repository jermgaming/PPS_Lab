#include <stdio.h>

int main() {
    int num1, num2;
    int carry;
    
    // Read two numbers from the user
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    // Add the numbers using bitwise operations
    while (num2 != 0) {
        // Calculate carry bits
       
        carry=num1&num2;
		num1=num1^num2;
        // Calculate sum of bits where there is no carry
       
        num2=carry<<1;
        // Shift carry to the left
     
    }
    
    // Print the result
    printf("%d",num1);
    
    return 0;
}