#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Actually, my number in group is 26.
// But variants are only provided till 20,
// so I've done variant 6 instead.

int main() {
	double a;
	printf("Enter value of a: ");
	scanf("%lf", &a);
	
	double z1 = cos(a) + cos(2*a) + cos(6*a) + cos(7*a);
	double z2 = 4 * cos(a/2) * cos((5*a)/2) * cos(4*a);
	
	printf("z1 = cos(a) + cos(2a) + cos(6a) + cos(7a)= %1f\n", z1);
	printf("z2 = 4 * cos(a/2) * cos(5a/2) * cos(4a)= %1f\n", z2);
	
	return 0;
}