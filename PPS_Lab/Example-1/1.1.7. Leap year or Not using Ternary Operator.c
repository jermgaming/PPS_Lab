#include <stdio.h>

int main() {
    int year;
    
    // Read the year from the user
    
    scanf("%d",&year);
    // Determine if the year is a leap year using nested ternary operators
    const char *result = (year%4==0 && year%100!=0) | (year%400==0) ? "Leap year":"Not a leap year";
    
    // Print the result
    printf("%s",result);
    
    return 0;
}