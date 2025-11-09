#include <stdio.h>

int main() {
    int a, b, result = 0;
    int i;

    // Read the two numbers from the user
    scanf("%d", &a);
    scanf("%d", &b);
    
    // Determine the sign of the result
    // XOR to determine if result should be negative
    
	int sign = 1;
	if((a<0) ^ (b<0)){
		sign=-1;
	}
    // Convert numbers to positive for the loop
	a=a<0?-a:a;
	b=b<0?-b:b;

    // Perform repeated addition
    for (  i=0;i<b;i++ ) {

        result += a;
    }
    
    // Apply the sign to the result if needed
    
	result=result*sign;
    // Print the result
    printf("%d",result);
    
    return 0;
}
