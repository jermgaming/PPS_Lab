#include <stdio.h>

int main() {
    float radius, volume;
    const float pi = 3.14;

    // Read the radius of the ball
    scanf("%f",&radius);
    // Calculate the volume of the sphere
	volume=(4.0/3.0)*pi*(radius*radius*radius);

    // Print the volume with 6 decimal places
    printf("%.6f\n", volume);

    return 0;
}
