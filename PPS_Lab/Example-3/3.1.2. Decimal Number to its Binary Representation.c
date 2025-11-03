#include <stdio.h>

// Function to convert decimal to binary
void decToBinary(int n) {
    
    if(n==0) return;
	decToBinary(n/2);
	printf("%d",n%2);
    
}

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("Negative numbers are not supported\n");
        return 1;
    }
    decToBinary(n);
    printf("\n");
    return 0;
}
